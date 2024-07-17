#include <stdio.h>

int main()
{
    int i, j, sp;
    for (i = 0; i < 5; i++)
    {
        for (sp = 5; sp > i; sp--)
        {
            printf("  ");
        }
        for (j = i; j < 5; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
