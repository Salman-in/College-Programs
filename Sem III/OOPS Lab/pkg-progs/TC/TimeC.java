package TC;
import java.util.*;
public class TimeC {
	int hours, seconds, minutes;
	Scanner in = new Scanner(System.in);
	
	public void hourstominutes() {
		System.out.print("Enter the hours to convert to minutes : ");
		hours = in.nextInt();
		minutes = hours * 60;
		System.out.println("Minutes : " + minutes);
	}
	public void minutestohours() {
		System.out.print("Enter the minutes to convert to hours : ");
		minutes = in.nextInt();
		hours = minutes / 60;
		System.out.println("Hours : " + hours);
	}
	public void hourstoseconds() {
		System.out.print("Enter the hours to convert to seconds : ");
		hours = in.nextInt();
		seconds = hours * 3600;
		System.out.println("Seconds : " + seconds);
	}
	public void secondstohours() {
		System.out.print("Enter the seconds to convert to hours : ");
		seconds = in.nextInt();
		hours = seconds / 3600;
		System.out.println("Hours : " + hours);
	}
}
