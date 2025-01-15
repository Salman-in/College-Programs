#include <stdio.h>

int main()
{
    int a, *p, **dp;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    p = &a;
    dp = &p;
    printf("Value of a is %d\n", a);
    printf("Value of p is %d\n", p);
    printf("Value of dp is %d\n", dp);
    printf("Accessing pointer p %d\n", *p);
    printf("Accessing pointer dp %d\n", **dp);
}
