#include<stdio.h>

int main()
{
    char ch;
    printf("Enter your value: \n");
    scanf("%c", &ch);
    switch(ch)
    {
    case '&':
        printf("value is &.\n");
        break;
    case '%':
        printf("value is %.\n");
        break;
    case '*':
        printf("value is *.\n");
        break;
    case '$':
        printf("value is $.\n");
        break;
    case '@':
        printf("value is @.\n");
        break;
    default:
        printf("value is not availablel. \n");
    }
    return 0;
}


