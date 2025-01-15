#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int add(int a, int b);
float add(float a, float b);
int subtract(int a, int b);
float subtract(float a, float b);
int multiply(int a, int b);
float multiply(float a, float b);
int divide(int a, int b);
float divide(float a, float b);
int modulas(int a,int b);
float power(float base,float exponent);

void clearInputBuffer();

int main(){
	int choice;
	do {
		cout << "\nSimple Calculator Menu :\n";
		cout << "1.Integer Addition\n";
		cout << "2.Integer Subtraction\n";
		cout << "3.Integer Multiplication\n";
		cout << "4.Integer Division\n";
		cout << "5.Integer Modulus\n";
		cout << "6.Float Addition\n";
		cout << "7.Float Subtraction\n";
		cout << "8.Float Multiplication\n";
		cout << "9.Float Division\n";
		cout << "10.Float Power\n";
		cout << "0.Exit\n";
		cout << "Enter your choice : ";
		cin >> choice;
		
		if(cin.fail()){
			clearInputBuffer();
			cout << "Invalid Input! Please enter a number between 0 and 10\n";
			continue;
			}
		switch(choice){
			case 1 : {
				int a, b;
				cout << "Enter two integers : ";
				cin >> a >> b;
				cout << "Result : "<< add(a, b)<< endl;
				break;
				}
			case 2 : {
				int a, b;
				cout << "Enter two integers : ";
				cin >> a >> b;
				cout << "Result : "<< subtract(a, b)<< endl;
				break;
				}
			case 3 : {
				int a, b;
				cout << "Enter two integers : ";
				cin >> a >> b;
				cout << "Result : "<< multiply(a, b)<< endl;
				break;
				}
			case 4 : {
				int a, b;
				cout << "Enter two integers : ";
				cin >> a >> b;
				cout << "Result : "<< divide(a, b)<< endl;
				break;
				}
			case 5 : {
				int a, b;
				cout << "Enter two integers : ";
				cin >> a >> b;
				cout << "Result : "<< modulas(a, b)<< endl;
				break;
				}	
			case 6 : {
				float a, b;
				cout << "Enter two floating point numbers : ";
				cin >> a >> b;
				cout << "Result : "<< add(a, b)<< endl;
				break;
				}
			case 7 : {
				float a, b;
				cout << "Enter two floating point numbers : ";
				cin >> a >> b;
				cout << "Result : "<< subtract(a, b)<< endl;
				break;
				}
			case 8 : {
				float a, b;
				cout << "Enter two floating point numbers : ";
				cin >> a >> b;
				cout << "Result : "<< multiply(a, b)<< endl;
				break;
				}
			case 9 : {
				float a, b;
				cout << "Enter two floating point numbers : ";
				cin >> a >> b;
				cout << "Result : "<< divide(a, b)<< endl;
				break;
				}
			case 10 : {
				float base,exponent;
				cout << "Enter the base and exponent : ";
				cin >> base >> exponent;
				cout << "Result : "<< power(base,exponent) << endl;
				break;		
				}
			case 0 : {
				cout << "Exiting Calculator, GoodBye!" << endl;
				break;
				}
			default:
				cout << "Invalid choice! Please Select a valid option.\n";
		}
	} 
	while(choice!=0);
	return 0;
}

int add(int a, int b){
	return a + b;
	}
			
float add(float a, float b){
	return a + b;
	}
	
int subtract(int a, int b){
	return a - b;
	}
	
float subtract(float a, float b){
	return a - b;
	}
	
int multiply(int a, int b){
	return a * b;
	}
	
float multiply(float a, float b){
	return a * b;
	}
	
int divide(int a, int b){
	if(b != 0){
		return static_cast<int>(a) / b;
		} 
	else {
		cout << "Error : Division by Zero!" << endl;
		return numeric_limits<int>::quiet_NaN(); //Return NaN
		}
	}
	
float divide(float a, float b){
	if(b != 0){
		return a / b;
		} 
	else {
		cout << "Error : Division by Zero!" << endl;
		return numeric_limits<float>::quiet_NaN(); //Return NaN
		}
	}
	
int modulas(int a , int b){
	if(b != 0){
		return a % b;
		} 
	else {
		cout << "Error : Division by Zero!" << endl;
		return 0;
		}
	}
	
float power(float base, float exponent){
	return pow(base,exponent);
	}
	
void clearInputBuffer() {
	cin.clear(); //Clear the error flag
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); //Ignore the rest of the line
		}
