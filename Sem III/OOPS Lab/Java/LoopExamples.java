
public class LoopExamples {

	public static void main(String[] args) {
		int[] numbers = {1,2,3,4,5};
		
		System.out.println("Using a for loop:");
		for(int i = 0;i < numbers.length;i++) {
			System.out.println(numbers[i] + " ");
	}
    System.out.println();

    //
    System.out.println("Using a for-each loop :");
    for(int num : numbers) {
    	System.out.println(num + " ");
    }
    System.out.println();
    
    //USING A WHILE LOOP
    System.out.println("Using a while loop");
    int index = 0;
    while(index < numbers.length){
    	System.out.println(numbers[index]);
    	index++;
    }
    System.out.println();
    
    //USING A DO-WHILE LOOP 
    System.out.println("Using a do-while loop");
    int i = 0;
    do {
    	System.out.println(numbers[i] + " ");
    	i++;
    } while(i < numbers.length);
    System.out.println();
	}
}
