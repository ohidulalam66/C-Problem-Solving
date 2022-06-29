#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a, b, c;
    printf("Input the A value integer Number: \n");
    scanf("%d", &a);
    printf("Input the B value integer Number: \n");
    scanf("%d", &b);
    // sum is function execute 17 line
    c = sum(a, b);
    printf("%d + %d Summation = %d.", a, b, c);
    return 0;
}

int sum(int a, int b)
{
    int s;
    s = a + b;
    return s;
}