/*
Write a C program to find the Second largest among four numbers.
 */

#include <stdio.h>
int main()
{
    int one, two, three, four;
    printf("Enter the Four Number:\n");
    scanf("%d%d%d%d", &one, &two, &three, &four);
    if (one >= two && one >= three && one >= four)
    {
        if (two >= three && two >= four)
        {
            printf("%d is Second largest number", two);
        }
    }
    else if (two >= one && two >= three && two >= four)
    {
        if (three >= one && three >= four)
        {
            printf("%d is Second largest number", three);
        }
    }
    else if (three >= one && three >= two && three >= four)
    {
        if (four >= one && four >= two)
        {
            printf("%d is Second largest number", four);
        }
    }
    else if (two >= three && two >= four && two >= one)
    {
        if (one >= three && one >= four)
        {
            printf("%d is Second largest number", one);
        }
    }
    else
    {
        printf("You enter the four number.");
    }
    return 0;
}