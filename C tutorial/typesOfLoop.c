#include <stdio.h>

int main()
{
    int i = 100;

    // do
    // {
    //     printf("%d\t", i);
    //     i = i - 5;
    // } while (i >= 0);

    // for (i = 100; i >= 0; i = i - 5)
    // {
    //     printf("%d\t", i);
    // }

    while ((i >= 0))
    {
        printf("%d\t", i);
        i = i - 5;
    }

    return 0;
}