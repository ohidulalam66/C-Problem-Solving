#include <stdio.h>
int main()
{
    int month;
    printf("Enter a Month Number: \n");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("This Month is 31 days.\n");
    }
    else if (month == 2)
    {
        printf("This Month is 28/29 days.\n");
    }

    else
    {
        printf("This Month is 30 days.\n");
    }
    return 0;
}