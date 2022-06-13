#include <stdio.h>

int main()
{
    int num;
    printf("Enter a integer number:");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is EVEN Number", num);
    }
    else
    {
        printf("%d is ODD Number", num);
    }

    return 0;
}