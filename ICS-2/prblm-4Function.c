/*
Write a C program to check whether a number is even or odd using functions.
 */
#include <stdio.h>
#include <stdbool.h>

int OddOrEven(int input);
int main()
{

    int input, result;
    printf("Enter a Number input then check Number: \n");
    scanf("%d", &input);
    result = OddOrEven(input);
    if (result == true)
    {
        printf("%d is Even Number.\n", input);
    }
    else
    {
        printf("%d is Odd Number.\n", input);
    }

    return 0;
}

int OddOrEven(int i)
{
    if (i % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
