#include <stdio.h>

int main()
{
    int a, b, x, y, euq;
    printf("Enter the first integer Number:\n");
    scanf("%d", &a);
    printf("Enter the second integer Number:\n");
    scanf("%d", &b);
    printf("Enter the third  integer Number:\n");
    scanf("%d", &x);
    printf("Enter the last integer Number:\n");
    scanf("%d", &y);

    euq = (a + b) * (x + b);
    printf("The equation of %d", euq);

    return 0;
}