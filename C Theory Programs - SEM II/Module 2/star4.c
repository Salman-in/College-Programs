#include <stdio.h>

int main()
{
    int i, j, sp;
    for (i = 0; i < 5; i++)
    {
        // for (sp = 5; sp > i; sp--) //OR//
        for (sp = i; sp < 5; sp++)
        {
            printf(" ");
        }
        for ( j = 0; j <= i; j++)
        {
            printf("*"); // For right angle triangle
            // printf("* "); // For equilateral triangle
        }  
        printf("\n");
    }
}
