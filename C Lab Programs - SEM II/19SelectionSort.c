#include <stdio.h>
void main(){
int n,i,j,swap,a[100],position;
printf("Enter the total number of items\n");
scanf("%d",&n);
printf("Enter the weights of each element \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<(n-1);i++)
{
position = i;
for(j = (i+1);j<n;j++)
{
if(a[position] > a[j])
position = j;
}
if(position != i){
swap = a[i];
a[i] = a[position];
a[position] = swap;
}
}
printf("After sorting the weights of each item : \n");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
printf("\n");
}
