/*
Write a C program to find cube of any number using function.
 */

#include <stdio.h>
int Cube(int n);

int main()
{
    int num, c;
    printf("Enter a Integer Number find Cube:\n");
    scanf("%d", &num);
    c = Cube(num);
    printf("%d is Number %d Cube.\n", num, c);
    return 0;
}

int Cube(int n)
{

    return n * n * n;
}