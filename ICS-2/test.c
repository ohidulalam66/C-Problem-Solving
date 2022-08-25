/* write a function that integer number (a and b) as parameter and returns the even number  */
#include <stdio.h>

int main()
{

    int n, tmp, rem, sum = 0;
    printf("Enter long numbers: \n");
    scanf("%d", &n);
    tmp = n;
    while (tmp != 0)
    {
        rem = tmp % 10;
        tmp /= 10;
        sum = (sum * 10) + rem;
    }
    printf("%d\t", sum);
    return 0;
}