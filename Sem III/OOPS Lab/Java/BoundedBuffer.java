public class BoundedBuffer {
	private final int[] buffer;
	private int count,in,out;
	
	public BoundedBuffer(int size) {
		buffer = new int[size];
		count = in = out = 0;
	}
	
	public synchronized void put(int data) {
		while(count == buffer.length) {
			try {
				wait();
			} catch(InterruptedException e) { }
		}
		buffer[in] = data;
		in = (in + 1) % buffer.length;
		count++;
		notifyAll();
	}
	
	public synchronized int get() {
		while(count == 0) {
			try {
				wait();
			} catch(InterruptedException e) { }
		}
		int data = buffer[out];
		out = (out + 1) % buffer.length;
		count--;
		notifyAll();
		return data;
	}
	
	public static void main(String[] args) {
		BoundedBuffer buffer = new BoundedBuffer(10);
		
		//Producer Thread
		Thread producer = new Thread(() -> {
			for(int i = 0; i < 10; i++) {
				buffer.put(i);
				System.out.println("Producer" + i);
			}
		});
		
		//Consumer Thread
		Thread consumer = new Thread(() -> {
			for(int i = 0; i < 10; i++) {
				int data = buffer.get();
				System.out.println("Consumed" + data);
			}
		});
				
		producer.start();
		consumer.start();
	}

}
