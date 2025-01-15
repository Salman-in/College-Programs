#include <stdio.h>
#include <math.h> 
void main(){
int i,n;
float x,sum,term;
printf("Enter the value of angle in degrees:\n");
scanf("%f",&x);
printf("Enter the number of terms:\n");
scanf("%d",&n);
x = x*3.14159/180;
printf("The mathematical sin value is = %f\n",sin(x));
term = x;
sum = x;
for(i=1;i<n;i++){
term = -term*x*x/(2*i*(2*i+1));
sum = sum + term;
}
printf("The calculated sin value is = %f\n",sum);
}
