#include <stdio.h>
void main(){
  int num,count=0;
  printf("Enter the number : ");
  scanf("%d",&num);
  while (num)
  {
    num = num/10;
    count++;
  }
  printf("The count is %d",count);
}