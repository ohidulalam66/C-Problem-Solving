/*
Given a character as input, identify the character as alphabet, number or others.
For more clarification, check sample input/output.
 */

#include <stdio.h>

// Symbol (32 -47) (58 - 64) (123 - 255)ASCII value

int main()
{
    char ch;
    printf("Enter any Characters: \n");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90 || ch >= 95 && ch <= 122)
    {
        printf("This is Alphabet.\n");
    }
    else if (ch >= 49 && ch <= 57)
    {
        printf("This is Number.\n");
    }
    else
    {
        printf("This is symbol.\n");
    }

    return 0;
}