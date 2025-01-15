#include <stdio.h>
void main(){
int SR[50],low,mid,high,found,n,Record,i;
printf("Enter the total number of sales Record\n");
scanf("%d",&n);
printf("Enter the sales records\n");
for(i=0;i<n;i++){
scanf("%d",&SR[i]);
}
printf("Enter the record to be searched \n");
scanf("%d",&Record);
found = 0;
low = 0;
high = n-1;
while(low<=high){
mid = (low+high)/2;
if(Record == SR[mid]){
found = 1;
break;
}
if(Record < SR[mid]){
high = mid - 1;
}
if(Record > SR[mid]){
low = mid + 1;
}
}
if(found == 1){
printf("Sales record %d is found at position %d\n",Record , mid+1);
}
else{
printf("Record not found\n");
}
}
