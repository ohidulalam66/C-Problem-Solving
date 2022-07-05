#include <stdio.h>
#include <stdbool.h>
bool divisible(int x);

int main()
{
    int num;
    bool result;
    printf("Enter a Integer Number: \n");
    scanf("%d", &num);
    result = divisible(num);
    if (result == true)
        printf("This a Divisible Number\n");
    else
        printf("This a Indivisible Number\n");

    return 0;
}

bool divisible(int x)
{
    if (x % 11 == 0 && x % 5 == 0)
    {
        return true;
    }
    else
        return false;
}