#include<stdio.h>
void main()
{
int i,n,a[10],sum=0;
printf("enter number of array elements\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<n;i++)
{
sum=sum+ a[i];
}
printf("sum=%d",sum);
}