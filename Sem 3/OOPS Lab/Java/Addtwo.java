import java.util.Scanner;

public class Addtwo {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the first number");
		int n1 = s.nextInt();
		System.out.println("Enter the second number");
		int n2 = s.nextInt();
		
		int n3 = n2 + n1;
		System.out.println("The sum is : " + n3);
		s.close();
	}
}
