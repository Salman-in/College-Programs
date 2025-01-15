package CC;
import java.util.*;

public class CurrencyC {
	double inr,usd,euro, yen;
	Scanner in = new Scanner(System.in);
	
	public void dollartorupee() { 
		System.out.print("Enter the dollars to convert to rupees: ");
		usd = in.nextDouble();
		inr = usd * 81.83;
		System.out.println("Dollar = " + usd + " equals to INR " + inr);
	}
	
	public void rupeetodollar() { 
		System.out.print("Enter the rupees to convert to dollars: ");
		inr = in.nextDouble();
		usd = inr/81.83;
		System.out.println("Rupee = " + inr + " equals to USD " + usd);
	}	
	
	public void eurotorupee() { 
		System.out.print("Enter the euros to convert to rupees: ");
		euro = in.nextDouble();
		inr = euro * 79.06;
		System.out.println("Euro = " + euro + " equals to INR " + inr);
	}

	public void rupeetoeuro() { 
		System.out.print("Enter the rupees to convert to euros: ");
		inr = in.nextDouble();
		euro = inr/79.06;
		System.out.println("Rupee = " + inr + " equals to Euro " + euro);
	}

	public void yentorupee() { 
		System.out.print("Enter the yen to convert to rupees: ");
		yen = in.nextDouble();
		inr = yen * 0.57;
		System.out.println("Yen = " + yen + " equals to INR " + inr);
	}

	public void rupeetoyen() { 
		System.out.print("Enter the rupees to convert to yen: ");
		inr = in.nextDouble();
		yen = inr/0.57;
		System.out.println("Rupee = " + inr + " equals to Yen " + yen);
	}

}
