#include <stdio.h>
void Pakistani();
void Indian();

int main()
{
    char ch;
    printf("Enter any One p/i: \n");
    scanf("%c", &ch);

    if (ch == 'p')
        Pakistani();
    else
        Indian();
    return 0;
}

void Pakistani()
{
    printf("Salam \n");
}

void Indian()
{
    printf("Adav \n");
}