#include <stdio.h>
void main(){
int month;
printf("Enter the number of a month\n");
scanf("%d",&month);
switch(month){
case 1:printf("January\n31 days\n");
break;
case 2:printf("Febraury\n28/29 days\n");
break;
case 3:printf("March\n31 days\n");
break;
case 4:printf("April\n30 days\n");
break;
case 5:printf("May\n31 days\n");
break;
case 6:printf("June\n30 days\n");
break;
case 7:printf("July\n31 days\n");
break;
case 8:printf("August\n31 days\n");
break;
case 9:printf("September\n30 days\n");
break;
case 10:printf("October\n31 days\n");
break;
case 11:printf("November\n30 days\n");
break;
case 12:printf("December\n 31 days\n");
break;
default:printf("Enter a number between 1 and 12\n");
}
}
