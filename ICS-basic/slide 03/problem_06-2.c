/*
Write a C program that takes a character as input and determines whether it is a vowel or consonant or other symbols.
For more clarification, check sample input/output.
 */

// Symbol (32 -47) (58 - 64) (123 - 255) ASCII value

#include <stdio.h>

int main()
{
    char x;
    printf("Enter Any character: \n");

    scanf("%c", &x);

    if (x == 'a' || x == 'e' || x == 'u' || x == 'i' || x == 'o' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        printf("%c is Vowel.", x);
    }
    else if ((x >= 32 && x <= 47) || (x >= 58 && x <= 64) || (x >= 123 && x <= 255))
    {
        printf("%c is Symbol.", x);
    }

    else
    {
        printf("%c is consonant.", x);
    }
    return 0;
}
