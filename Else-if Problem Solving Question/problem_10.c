/*
Write a program in C to read any day number in an integer and display the
day name in the word.
 */
#include <stdio.h>
int main()
{
    int dayNo;
    printf("Enter a day Number: \n");
    scanf("%d", &dayNo);

    if (dayNo <= 7 && dayNo >= 1)
    {
        if (dayNo == 1)
            printf("%d day is Saturday", dayNo);
        else if (dayNo == 2)
            printf("%d day is Sunday", dayNo);
        else if (dayNo == 3)
            printf("%d day is Monday", dayNo);
        else if (dayNo == 4)
            printf("%d day is Tuesday", dayNo);
        else if (dayNo == 5)
            printf("%d day is Wednesday", dayNo);
        else if (dayNo == 6)
            printf("%d day is Thursday", dayNo);
        else
            printf("Day %d is Friday", dayNo);
    }
    else
        printf("%d Number is Invalid, You enter the number 1 to 7.", dayNo);

    return 0;
}