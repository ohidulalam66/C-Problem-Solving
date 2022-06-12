#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 2; i++)
    {
        printf("Outer loop start.\n");
        for (j = 1; j <= 3; j++)
        {
            printf("Inner loop ************.\n");
            for (k = 0; k <= 2; k++)
            {
                printf("Inner loop @@@@@@@@@@@.\n");
            }
        }
        printf("Outer loop end.\n");
    }
    return 0;
}