#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string usn;
    float marks[4];
    float total;
    float percentage;

public:
//constructors
	Student(){
      name = "";
      usn = "";
      for(int i = 0;i < 4;i++){
        marks[i] = 0;
      }
      total = 0;
      percentage = 0;
}

//Method to input student details
void inputDetails(){
    cout<<"Enter the Student name : ";
    cin>>name;
    cout<<"Enter the USN : ";
    cin>>usn;

    total = 0;
    for(int i = 0;i < 4;++i){
       cout << "Enter the marks for the subject " << (i + 1) << ": ";
       cin >> marks[i];
       total = total + marks[i];
       }
    percentage = (total/400)*100;
  }

//Method to display student details
void displayDetails(){
    cout << "\nStudent Details :" << endl;
    cout << "Name : " << name << endl;
    cout << "USN : " << usn << endl;
    cout << "Marks : ";
    for(int i = 0;i < 4;++i){
      cout << marks[i]<<" ";
    }
    cout<< "\nTotal Marks : " << total << endl;
    cout << "Percentage : "<< percentage << "%"<<endl;
 } 
};

int main(){
	int n;
	cout<< "Enter the no. of students : ";
	cin>>n;
    Student s[100]; //Creating an object of class Student

	for(int i = 0;i < n;i++){
		s[i].displayDetails();
    }
	for(int i = 0;i < n;i++){
		s[i].inputDetails();
    }
	for(int i = 0;i < n;i++){
		s[i].displayDetails();
    }
    return 0;
}
