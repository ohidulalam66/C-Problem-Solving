#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of Triangle edges: \n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("This Triangle is valid");
    }
    else
    {
        printf("This Triangle is invalid");
    }

    getch();
    return 0;
}
