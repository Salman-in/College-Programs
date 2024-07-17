#include <stdio.h>
void main(){
float a, b, result;
char op;
printf("Enter the value of operand a and b\n");
scanf("%f%f",&a,&b);
printf("Enter the operator\n");
scanf("%s",&op);
switch(op){
case '+':result = a + b;
printf("Result = %f\n",result);
break;
case '-':result = a - b;
printf("Result = %f\n",result);
break;
case '*':result = a * b;
printf("Result = %f\n",result);
break;
case '/': if(b!=0){
result = a / b;
printf("Result = %f\n",result);
}
else{
printf("Divide by zero error\n");
}
break;
default:printf("Invalid operator, Enter a valid operator\n");
}}
