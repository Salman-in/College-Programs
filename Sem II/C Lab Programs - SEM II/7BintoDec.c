#include <stdio.h>
void main(){
int binary, num, rem, decimal=0,base=1;
printf("Enter a binary number in 0s and 1s \n");
scanf("%d",&binary);
num = binary;
while(num>0){
rem = num%10;
decimal = decimal + rem*base;
num = num/10;
base = base*2;
}
printf("The binary value = %d \n",binary);
printf("Equivalent decimal number = %d \n",decimal);
}
