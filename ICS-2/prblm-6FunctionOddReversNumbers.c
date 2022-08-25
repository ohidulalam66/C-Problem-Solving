/* write a function that takes two integer numbers (a and b) as parameter and prints the odd numbers between that range reverse way. Here a<b */
#include <stdio.h>
void OddReversNumbers(int x, int y);

int main()
{
    int a, b, i, odd;
    printf("Enter two integer numbers: \n");
    scanf("%d%d", &a, &b);
    OddReversNumbers(a, b);

    return 0;
}

void OddReversNumbers(int x, int y)
{
    int i;
    for (i = y; i >= x; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
}