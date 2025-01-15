package DC;
import java.util.*;

public class DistanceC {
	double km, m, miles;
	Scanner in = new Scanner(System.in);
	
	public void mtokm() { 
		System.out.print("Enter the distance in meters: ");
		m = in.nextDouble();
		km = m/1000;
		System.out.print(m + "m is equals to " + km + "km");
		System.out.println();
	}
	public void kmtom() { 
		System.out.print("Enter the distance in kilometers: ");
		km = in.nextDouble();
		m = km * 1000;
		System.out.println(km + "km is equals to " + m + "m");
		System.out.println();
	}
	public void milestokm() { 
		System.out.print("Enter the distance in miles: ");
		miles = in.nextDouble();
		km = miles * 1.60934;
		System.out.println(miles + "miles is equals to " + km + "km");
		System.out.println();
	}
	public void kmtomiles() { 
		System.out.print("Enter the distance in kilometers: ");
		km = in.nextDouble();
		miles = km * 0.621371;
		System.out.println(km + "km is equals to " + miles + "miles");
		System.out.println();
	}
}
