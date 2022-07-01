/*
C program to check whether a character is an alphabet or not.
 */
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Any character: \n");

    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
    {
        printf("%c is Alphabet.", ch);
    }
    else
    {
        printf("%c isn't Alphabet.", ch);
    }
    return 0;
}