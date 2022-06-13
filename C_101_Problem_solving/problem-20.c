#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Any interger Number:");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}