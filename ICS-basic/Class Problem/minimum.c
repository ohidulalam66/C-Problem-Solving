#include <stdio.h>
int Minimum(int x, int y);

int main()
{
    int a, b, c;
    printf("Enter two the integer Number: ");
    scanf("%d%d", &a, &b);
    c = Minimum(a, b);
    printf("%d", c);
    return 0;
}

int Minimum(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}