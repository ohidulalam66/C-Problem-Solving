#include <stdio.h>
int main()
{

    // int i, n;
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     if (n % 2 == 0)
    //     {
    //         printf("%d\t", n);
    //     }
    // }
    // return 0;
    int counter, n;
    printf("Enter the Even number  \n");
    /*
     * Initialize counter with 1, and increment it in every iteration.
     * For every value of counter check whether it is even number or
     * not and print it accordingly
     */
    for (counter = 1; counter <= n; counter++)
    {
        /* Even numbers are divisible by 2 */
        if (counter % 2 == 0)
        {
            /* counter is even, print it */
            printf("%d ", counter);
        }
    }
}