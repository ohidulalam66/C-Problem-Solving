#include <stdio.h>
void OddNumbersRange(int p, int q);

int main()
{
    int x, y;

    printf("Enter two the integer Numbers:\t");
    scanf("%d%d", &x, &y);
    OddNumbersRange(x, y);

    return 0;
}

void OddNumbersRange(int p, int q)
{

    for (int i = q; p <= i; i--)
    {
        // odd number print 2 modulus not equal zero
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
}