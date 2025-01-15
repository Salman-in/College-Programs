class Vehicle {
	String make;
	String model;
	int year;
	
	//Constructor
	public Vehicle(String make,String model,int year){
		this.make = make;
		this.model = model;
		this.year = year;
		}
	public void displayDetails() {
		System.out.println("Make : " + make);
		System.out.println("Model : " + model);
		System.out.println("Year : " + year);
		}
	} 
	
class Car extends Vehicle{
	String fuelType;
	
	//Constructor
	public Car(String make, String model, int year, String fuelType){
		super(make, model, year);
		this.fuelType = fuelType;
	}
	
	@Override
	public void displayDetails() {
		super.displayDetails();
		System.out.println("Fuel Type : " + fuelType);
		}
	}
	
class Truck extends Vehicle{
	int payloadCapacity;
	
	//Constructor
	public Truck(String make, String model, int year,int payloadCapacity){
		super(make, model, year);
		this.payloadCapacity = payloadCapacity;
	}
	
	@Override
	public void displayDetails() {
		super.displayDetails();
		System.out.println("Paylaod Capacity : " + payloadCapacity + " kg");
		}
	}
	
class Dealership {
	Vehicle[] vehicles;
	int count;
	
	public Dealership(int size){
		vehicles = new Vehicle[size];
		count = 0;
		}
	public void addVehicle(Vehicle vehicle){
		if(count < vehicles.length){
			vehicles[count] = vehicle;
			count++;
			} else {
				System.out.println("Dealership is full! Cannot add more vehicles.");
			}
		}
	
	public void displayInventory() {
		System.out.println("Dealership Inventory : ");
		for(int i = 0;i < count; i++){
			System.out.println("Vehicle " + (i + 1) + ": ");
			vehicles[i].displayDetails();
			System.out.println();
			}
		}
	}
	
public class CarDealershipApp {
	public static void main(String args[]){
		Dealership dealership = new Dealership(5);
		Car car1 = new Car("Toyota","Corolla",2020,"Petrol");
		Car car2 = new Car("Tesla","Model 3",2021,"Electric");
		Truck truck1 = new Truck("Ford","F-150",2019,1000);
		Truck truck2 = new Truck("RAM","1500",2022,1200);
		
		dealership.addVehicle(car1);
		dealership.addVehicle(car2);
		dealership.addVehicle(truck1);
		dealership.addVehicle(truck2);
		
		dealership.displayInventory();
		}
	}
