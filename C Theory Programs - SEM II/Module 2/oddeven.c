#include <stdio.h>
void main(){
    int num , rem;
    printf("Enter the num : \n");
    scanf("%d",&num);
    rem = num%2;
    // -------------------Method 1---------------------//
    // switch (rem)
    // {
    // case 0:
    //     printf("the num is even\n");
    //     break;
    // case 1:
    //      printf("the num is odd\n");
    //     break;
    // }

     // -------------------Method 2---------------------//
    switch (num%10)
    {
    case 0:
    case 2:
    case 4:
    case 6:
    case 8:
        printf("even\n");
        break;
    
    default:
        printf("Odd\n");
    }
}