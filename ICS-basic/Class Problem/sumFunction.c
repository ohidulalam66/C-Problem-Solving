#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a, b, c;
    printf("Enter the value of a and b: \n");
    scanf("%d%d", &a, &b);
    c = sum(a, b);
    printf("%d + %d Sum = %d\n", a, b, c);
    // printf("%d is sum\n", c);
    return 0;
}

int sum(int a, int b)
{
    int s;
    s = a + b;
    return s;
}