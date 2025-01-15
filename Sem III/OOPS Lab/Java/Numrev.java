import java.util.Scanner;

public class Numrev {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the number to reverse");
		int num = s.nextInt();
		int rev = 0;
		while(num > 0) {
			int rem = num % 10;
			rev = rev * 10 + rem;
			num = num / 10;
			s.close();
		}
		System.out.println(rev);
	}

}
