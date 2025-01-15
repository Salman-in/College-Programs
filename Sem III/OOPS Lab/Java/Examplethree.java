
public class Examplethree {

	public static void main(String[] args) {
		 int[] numbers = {1,2,3,4,5};
	        int sum = 0;
		
	    	//1-Using a for loop to find the maximum number
			System.out.println("Using a for loop:");
			for(int i = 0;i < numbers.length;i++) {
				System.out.println(numbers[i] + " ");
				sum = sum + numbers[i];
			}
		    System.out.println();
			System.out.println("The sum using a for loop is : " + sum);

			//2-Using a for each loop to find the maximum number
			int max = Integer.MIN_VALUE;
			System.out.println("Using for each loop ");
			for(int num : numbers) {
				System.out.print(num + " ");
				if(num > max) {
					max = num;
				}
			}
		    System.out.println();
			System.out.println("The maximum number using a for-each loop is : " + max);
			
			//Using a while loop to find the product of the numbers
			int product = 1;
			System.out.println("Using a while loop ");
			int index = 0;
			while(index < numbers.length) {
				System.out.print(numbers[index]);
				product *= numbers[index];
				index++;
			}
		    System.out.println();
			System.out.println("The product using a while loop is : " + product);
			
			//Using a do-while loop to find the minimum number
			int min = Integer.MAX_VALUE;
			System.out.println("Using a do-while loop ");
			int i = 0;
			do {
				System.out.println(numbers[i] + " ");
				if(numbers[i] < min) {
					min = numbers[i];
				}
				i++;
			}while(i < numbers.length);
		    System.out.println();
			System.out.println("The minimum number using a do-while loop is : " + min);
	}

}
