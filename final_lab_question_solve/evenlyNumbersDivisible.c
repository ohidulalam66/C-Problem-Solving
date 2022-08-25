#include <stdio.h>
void EvenlyNumbersDivisible(int x, int y);

int main()
{
    int a, b;
    printf("Enter the two integer Numbers: \t");
    scanf("%d%d", &a, &b);
    EvenlyNumbersDivisible(a, b);
    return 0;
}

void EvenlyNumbersDivisible(int x, int y)
{
    for (y; x <= y; y--)
    {
        if (y % 3 == 0)
        {
            printf("%d\t", y);
        }
    }
}