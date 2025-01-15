import java.util.Scanner;

public class Largestoftwo {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the first number");
		int n1 = s.nextInt();
		System.out.println("Enter the second number");
		int n2 = s.nextInt();
		
		if(n1 > n2) {
			System.out.println("First number is greater");
		} else {
			System.out.println("Second number is greater");
			s.close();
		}
	}

}
