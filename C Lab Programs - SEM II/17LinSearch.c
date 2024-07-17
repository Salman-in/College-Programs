#include <stdio.h>
#include <stdlib.h>
void main(){
int a[20],i,n,x;
printf("How many contact numbers?\n");
scanf("%d",&n);
printf("Enter the contact numbers\n");
for(i=0;i<n;++i){
scanf("%d",&a[i]);
}
printf("Enter the contact number to search\n");
scanf("%d",&x);
for(i=0;i<n;++i){
if(a[i] == x){
printf("Element found at index %d\n",i);
exit(0);
}
}
printf("Element not found.\n");
}
