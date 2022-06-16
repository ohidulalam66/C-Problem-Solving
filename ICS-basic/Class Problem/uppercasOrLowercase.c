/* Take a character as input and check if it is in lowercase or in uppercase. */
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a any one letter:");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c Input is in lowercase.\n", ch);
    }
    else
    {
        printf("%c Input is in uppercase.\n", ch);
    }
    getch();
    return 0;
}
