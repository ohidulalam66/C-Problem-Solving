#include <stdio.h>
int main()
{
    int a;
    printf("Input the Integer Number:\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is Even Number.", a);
    }
    else
    {
        printf("%d is Odd Number.", a);
    }

    return 0;
}