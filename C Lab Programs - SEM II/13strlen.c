#include <stdio.h>
#include <string.h>
void main(){
char str[100];
int len;
printf("\nPlease Enter any String : \n");
gets(str);
len = strlen(str);
printf("The length of the String is : %d \n",len);
}
