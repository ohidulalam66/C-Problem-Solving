#include <stdio.h>
int tringale(int x, int y, int z);

int main()
{
    int a, b, c;
    printf("Enter three Edeges: \n");
    scanf("%d%d%d", &a, &b, &c);

    if (tringale(a, b, c))
        printf("True");
    else
        printf("False");

    return 0;
}
int tringale(int x, int y, int z)
{
    if ((x + y > z) && (y + z > x) && (z + x > y))
        return 1;
    else
        return 0;
}