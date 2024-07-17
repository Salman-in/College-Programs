#include <stdio.h>
void main(){
int A[10][10],B[10][10],i,j,m,n;
printf("Enter the number of rows in matrix: ");
scanf("%d",&m);
printf("Enter the number of column in matrix: ");
scanf("%d",&n);
printf("Enter the elements of the matrix: ");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d", &A[i][j]);
}
}
printf("Elements of the matrix are: \n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d\t", A[i][j]);
}
printf("\n");
}
printf("Transpose of the matrix is: \n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
B[i][j] = A[j][i];
printf("%d\t", B[i][j]);
}
printf("\n");
}
}
