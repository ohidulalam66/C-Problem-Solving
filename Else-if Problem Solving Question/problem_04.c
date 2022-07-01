/*
C program to check whether a number is a prime number or not.
 */
#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number and we will check, if the number is prime or not : ");
    scanf("%d", &num);

    if (num == 0 || num == 1 || (num % 2 == 0 && num > 2))
    {
        printf("The entered number is not a prime number!");
    }
    else
    {
        printf("The entered number is a prime number!");
    }
    return 0;
}