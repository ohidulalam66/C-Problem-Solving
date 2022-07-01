/*
C program to enter student marks and find percentages and grade
A college has the following rules for the grading system:
    ● 0 to 32 - F
    ● 33 to 39 – D
    ● 40 to 49 – C
    ● 50 to 59 – B
    ● 60 to 69 – A-
    ● 70 to 79 – A
    ● 80 t0 100 – A+
    ● 0 Down and 100 Up - Invalid Mark
 */
#include <stdio.h>
int main()
{
    int examMark;
    printf("Enter your and see your GPA Grade :");
    scanf("%d", &examMark);

    if (examMark <= 100 && examMark >= 80)
    {
        printf("You are got A+");
    }
    else if (examMark < 80 && examMark >= 70)
    {
        printf("You are got A");
    }
    else if (examMark < 70 && examMark >= 60)
    {
        printf("You are got A-");
    }
    else if (examMark < 60 && examMark >= 50)
    {
        printf("You are got B");
    }
    else if (examMark < 50 && examMark >= 40)
    {
        printf("You are got C");
    }
    else if (examMark < 40 && examMark >= 33)
    {
        printf("You are got D");
    }
    else if (examMark <= 32 && examMark >= 0)
    {
        printf("You are got F");
    }
    else
    {
        printf("Invalid Mark");
    }
    return 0;
}