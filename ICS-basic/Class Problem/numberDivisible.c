#include <stdio.h>
int divisible(int x);
int main()
{
    int num, result;
    scanf("%d", &num);
    result = divisible(num);
    if (result == 1)
        printf("This a Divisible Number\n");
    else
        printf("This a Indivisible Number\n");

    return 0;
}

int divisible(int x)
{
    if (x % 11 == 0 && x % 5 == 0)
    {
        return 1;
    }
    else
        return 0;
}