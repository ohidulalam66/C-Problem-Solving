#include <stdio.h>

int main()
{
    char letter;
    printf("Enter the any small number:");

    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'u' || letter == 'i' || letter == 'o')
    {
        printf("%c is Vowel", letter);
    }
    else
    {
        printf("%c is Consonent", letter);
    }

    return 0;
}