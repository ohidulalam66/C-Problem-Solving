/*
Write a C program that takes an integer number(x) as input and checks whether the number
is a square number or not.

For more clarification, check sample input/output.
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int x, square;
    printf("Enter the integer number: \n");
    scanf("%d", &x);
    square = (int)sqrt(x);
    if (square * square == x)
    {
        printf("%d is a Square Number.", x);
    }
    else
    {
        printf("%d isn't a Square Number.", x);
    }

    return 0;
}