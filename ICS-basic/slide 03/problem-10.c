/*
Given the value of three edges(a, b and c) of a triangle, determine whether the triangle is
right angled or not.

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
        if ((a * a) + (b * b) == (c * c) || (b * b) + (c * c) == (a * a) || (c * c) + (a * a) == (b * b))
        {
            printf("This is a Right Triangle\n");
        }
        else
        {
            printf("This is a Triangle\n");
        }
    }
    else
    {
        printf("This isn't a Triangle\n");
    }
    return 0;
}