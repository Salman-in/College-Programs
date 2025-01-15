#include <stdio.h>
void main(){
int n,i,j,temp,items[100];
printf("Enter the total number of items\n");
scanf("%d",&n);
printf("Enter the prices of each items\n");
for(i=0;i<n;i++){
scanf("%d",&items[i]);
}
printf("\nThe prices of each items are\n");
for(i=0;i<n;i++){
printf("%d\t",items[i]);
}
for(i=0;i<n;i++){
for(j=0;j<n-1;j++){
if(items[j]>items[j+1]){
temp = items[j];
items[j] = items[j+1];
items[j+1] = temp;
}
}
}
printf("\nThe Prices of each items from lowest to highest are : \n");
for(i=0;i<n;i++){
printf("%d\t",items[i]);
}
printf("\n");
}
