#include <stdio.h>
void main(){
int num, rem, rev=0;
printf("Enter a number to reverse\n");
scanf("%d",&num);
while(num!=0){
rem = num%10;
num = num/10;
rev = rev*10 + rem;
}
printf("The reversed number is %d \n",rev);
}
