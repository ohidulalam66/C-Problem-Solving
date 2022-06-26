/*
Write a C program to take three integer numbers (x, y and z) as input and display the
medium one.

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

    if ((y > x) || (z > x))
    {
        printf("x = %d value is medium one.", x);
    }
    else if ((x > y) || (z < y))
    {
        printf("y = %d value is medium one.", y);
    }
    else
    {
        printf("z = %d value is medium one.", z);
    }
    return 0;
}