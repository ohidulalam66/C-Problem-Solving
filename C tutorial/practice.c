#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        printf("Outer loop start.\n");
        for (j = 1; j <= 3; j++)
        {
            printf("Inner loop ************.\n");
        }
        printf("Outer loop end.\n");
    }
    return 0;
}