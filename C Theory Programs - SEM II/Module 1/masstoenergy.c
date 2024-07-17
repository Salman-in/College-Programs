#include <stdio.h>
#include <math.h>

void main(){
    double e , m , c = 3*pow(10,8);
    printf("enter the mass : ");
    scanf("%ld",&m);
    e = m*pow(c,2);
    printf("The energy is : %d",e);
}