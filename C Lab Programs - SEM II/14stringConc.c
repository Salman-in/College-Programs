#include <stdio.h>
#include <string.h>
void main(){
char str1[100],str2[100];
printf("\n Please enter string 1 : \n");
gets(str1); 
printf("\n Please enter string 2 : \n");
gets(str2); 
strcat(str1,str2);
printf("\n Concatenated string is : %s\n",str1);
}
