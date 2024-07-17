#include <stdio.h>
void main(){
int a[10][10],b[10][10],mul[10][10],m,n,i,j,k,p,q;
printf("Enter the number of row and column of matrix 1 : \n");
scanf("%d%d",&m,&n);
printf("Enter the number of row and column of matrix 2 : \n");
scanf("%d%d",&p,&q);
if(n!=p){
printf("Multiplication is not possible \n");
}
else{
printf("Enter the first matrix elements\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
printf("Enter the second matrix elements\n");
for(i=0;i<p;i++){
for(j=0;j<q;j++){
scanf("%d",&b[i][j]);
}
}
printf("Multiply the matrix\n");
for(i=0;i<m;i++){
for(j=0;j<q;j++){
mul[i][j] = 0;
for(k=0;k<n;k++){
mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
}
}
}
for(i=0;i<m;i++){
for(j=0;j<q;j++){
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}
}
