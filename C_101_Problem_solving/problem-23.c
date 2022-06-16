#include <stdio.h>

int main()
{
    int monthNumber;
    printf("Enter a integer Value thats means 1-12 Month Number: ");
    scanf("%d", &monthNumber);

    if (monthNumber == 1)
    {
        printf("%d is January", monthNumber);
    }
    else if (monthNumber == 2)
    {
        printf("%d is February", monthNumber);
    }
    else if (monthNumber == 3)
    {
        printf("%d is March", monthNumber);
    }
    else if (monthNumber == 4)
    {
        printf("%d is April", monthNumber);
    }
    else if (monthNumber == 5)
    {
        printf("%d is May", monthNumber);
    }
    else if (monthNumber == 6)
    {
        printf("%d is June", monthNumber);
    }
    else if (monthNumber == 7)
    {
        printf("%d is July", monthNumber);
    }
    else if (monthNumber == 8)
    {
        printf("%d is August", monthNumber);
    }
    else if (monthNumber == 9)
    {
        printf("%d is September ", monthNumber);
    }
    else if (monthNumber == 10)
    {
        printf("%d is October", monthNumber);
    }
    else if (monthNumber == 11)
    {
        printf("%d is November", monthNumber);
    }
    else if (monthNumber == 12)
    {
        printf("%d is December", monthNumber);
    }
    else
    {
        printf("%d Number is Not Found Mouth", monthNumber);
    }

    return 0;
}