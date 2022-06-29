#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("Enter the Four digit number: \n");
    scanf("%d", &n);
    r = n % 10;
    sum = sum + r;
    n = n / 10;
    r = n % 10;
    sum = sum + r;
    n = n / 10;
    r = n % 10;
    sum = sum + r;
    n = n / 10;
    sum = sum + n;
    printf("sum is %d\n", sum);
    return 0;
}