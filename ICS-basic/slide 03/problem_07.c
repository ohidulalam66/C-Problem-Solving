/*
Write a C program to take three integer numbers (x, y and z) as input and display the
Biggest one.

For more clarification, check sample input/output.
 */

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Input the x integer number: \n");
    scanf("%d", &x);
    printf("Input the y integer number: \n");
    scanf("%d", &y);
    printf("Input the z integer number: \n");
    scanf("%d", &z);

    if ((x > y) && (z < x))
    {
        printf("x = %d value is Biggest.", x);
    }
    else if ((y > x) && (z < y))
    {
        printf("y = %d value is Biggest.", y);
    }
    else
    {
        printf("z = %d value is Biggest.", z);
    }
    return 0;
}

// else (x < z && y < z) {}