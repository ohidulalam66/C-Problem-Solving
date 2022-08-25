#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter Two the Number:");
    scanf("%d%d", &x, &y);
    // x = 5;
    // y = 8;
    while (y != 0)
    {
        x++;
        y--;
    }
    printf("%d", x);

    return 0;
}