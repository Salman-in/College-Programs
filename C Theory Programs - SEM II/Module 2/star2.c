#include <stdio.h>
void main(){
    int i , j , n = 5;
    for ( i = 0; i < n ; i++)
    {
        // for ( j = i; j < n; j++) //OR//
        for ( j = n; j > i; j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}