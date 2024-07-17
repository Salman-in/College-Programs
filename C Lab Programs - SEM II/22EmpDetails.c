#include <stdio.h>
#include <stdlib.h>
typedef struct
{
char name[30];
int id;
float salary;
}Employee;

void main()
{
int n =2, i;
Employee employees[n];
printf("Enter %d Employee details \n\n",n);
for(i=0;i<n;i++){
printf("Employee %d \n",i+1);
printf("Name :");
scanf("%s",employees[i].name);
printf("Id : ");
scanf("%d",&employees[i].id);
printf("Salary : ");
scanf("%f",&employees[i].salary);
}
printf("-------------------All Employees Details-------------------\n");
for(i=0;i<n;i++){
printf("Name\t:");
printf("%s\n",employees[i].name);
printf("Id\t: ");
printf("%d\n",employees[i].id);
printf("Salary\t: ");
printf("%f\n",employees[i].salary);
printf("\n");
}
}
