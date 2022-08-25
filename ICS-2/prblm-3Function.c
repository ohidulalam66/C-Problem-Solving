/*
Write a C program to find maximum and minimum between two numbers using functions.
 */

#include <stdio.h>
int Max(int n1, int n2);
int Min(int n1, int n2);

int main()
{
    int p, q, maximum, minimum;
    printf("Enter any two numbers: ");
    scanf("%d%d", &p, &q);

    maximum = Max(p, q);
    minimum = Min(p, q);

    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d", minimum);

    return 0;
}

int Max(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int Min(int n1, int n2)
{
    if (n1 < n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}