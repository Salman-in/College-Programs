#include <stdio.h>
void main(){
char name[50];
float units, charge;
printf("Enter the name : ");
scanf("%s",name);
printf("Enter the number of units consumed :\n");
scanf("%f",&units);
charge = 100;
if(units<=200){
charge = charge+(0.80*units);
}
else if(units>200 && units<=300){
charge = charge+(0.80*200)+(0.9*(units-200));
}
else{
charge = charge+(0.80*200)+(0.9*100)+(1*(units-300));
}

if(charge>=400){
charge = charge + (charge*0.15);
}

printf("Total charge : %f\n",charge);
}
