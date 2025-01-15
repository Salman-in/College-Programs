import CC.*;
import DC.*;
import TC.*;
public class Program6 {
	public static void main(String[] args) {
			CurrencyC obj = new CurrencyC();
			DistanceC obj1 = new DistanceC();
			TimeC obj2 = new TimeC();
			
				
			obj.dollartorupee();
			obj.rupeetodollar();
			obj.eurotorupee();
			obj.rupeetoeuro();
			obj.yentorupee();
			obj.rupeetoyen();			
			obj1.mtokm();
			obj1.kmtom();
			obj1.milestokm();
			obj1.kmtomiles();
			obj2.hourstominutes();
			obj2.minutestohours();
			obj2.hourstoseconds();
			obj2.secondstohours();
	}

}
