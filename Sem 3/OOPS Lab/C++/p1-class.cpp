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

void displayDetails(){
    cout << "\nStudent Details :" << endl;
    cout << "Name : " << name << endl;
    cout << "USN : " << usn << endl;
    cout << "Marks : ";
    for(int i = 0;i < 4;++i){
      cout << marks[i]<<" ";
    }
	cout<<endl;
    for(int i = 0;i < 4;++i){
      if(marks[i]<35) cout<<"FAIL in Subject"<<" "<< (i+1) <<endl;
    }

    cout<< "\nTotal Marks : " << total << endl;
    cout << "Percentage : "<< percentage << "%"<<endl;

 } 
};

int main(){
   Student student;
   student.inputDetails();
   student.displayDetails();
   return 0;
}
