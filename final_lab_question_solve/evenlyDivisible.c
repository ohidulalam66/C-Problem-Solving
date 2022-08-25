#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the two integer Number: \n");
    scanf("%d%d", &x, &y);

    for (int i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            if (i % 2 == 0 && i % 3 == 0)
            {
                printf("%d\t", i);
            }
        }
    }

    return 0;
}