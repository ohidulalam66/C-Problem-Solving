#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three integer number?\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b || a < c)
    {
        printf("Max Number is : %d", a);
    }
    else if (b > c)
    {
        printf("Max Number is : %d", b);
    }
    else
    {
        printf("Max Number is: %d", c);
    }

    return 0;
}