#include <stdio.h>
int main()
{

    int i, j;
    i = 1;
    while (i <= 6)
    {
        j = i;
        while (j <= 6)
        {
            j++;
            printf("* ");
        }
        i++;
        printf("\n");
    }
    return 0;
}