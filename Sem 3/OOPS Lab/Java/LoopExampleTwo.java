
public class LoopExampleTwo {

	public static void main(String[] args) {
        int[] numbers = {1,2,3,4,5};
        int sum = 0;
		
		System.out.println("Using a for loop:");
		for(int i = 0;i < numbers.length;i++) {
			System.out.println(numbers[i] + " ");
			sum = sum + numbers[i];
		}
		System.out.println();
	    System.out.println("The sum of the given digits using a for loop is : " + sum);
	}

}
