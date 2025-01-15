
public class BoxDemo {
	static class Box{
		double width;
		double height;
		double depth;
		
	Box(double w,double h,double d){
		width = w;
		height = h;
		depth = d;
	}
	
	Box(){
		width = -1;
		height = -1;
		depth = -1;
	}
	
	Box(double len){
		width = height = depth = len;
	}

	double volume() {
		return width * height * depth;
	}
	
	void display() {
		System.out.println("Dimensions are " + width + " by " + height);
	}
	}
	static class Boxweight extends Box {
		double weight;
		
		Boxweight(double w,double h,double d,double m){
			super(w,h,d);
			weight = m;
		}
		@Override
		void display() {
			super.display();
			System.out.println("Weight is " + weight);
		}
	}
	
	public static void main(String[] args) {
        Boxweight mybox1 = new Boxweight(10, 20, 15, 34.3);
        Boxweight mybox2 = new Boxweight(2, 3, 4, 0.076);
		Box mybox3 = new Box(3,6,9);

		Box[] boxes = new Box[]{mybox1,mybox2,mybox3};
		for (Box box : boxes) {
			box.display();
			System.out.println("Volume is " + box.volume());
			System.out.println();
		}
    }

	// public static void main(String[] args) {
    //     Box box1 = new Box(10, 20, 30);
    //     box1.display();
    //     System.out.println("Volume: " + box1.volume());

	// 	System.out.println();

    //     // Create a Boxweight object
    //     Boxweight box2 = new Boxweight(10, 20, 30, 50);
    //     box2.display();
    //     System.out.println("Volume: " + box2.volume());
    // }

}
