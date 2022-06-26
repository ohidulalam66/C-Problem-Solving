/*
Given the value of three edges(a, b and c), determine whether they can form a triangle or
not.

For more clarification, check sample input/output.
 */

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Input the a integer number: \n");
    scanf("%d", &a);
    printf("Input the b integer number: \n");
    scanf("%d", &b);
    printf("Input the c integer number: \n");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("This is a Triangle\n");
    }
    else
    {
        printf("This isn't a Triangle\n");
    }

    return 0;
}