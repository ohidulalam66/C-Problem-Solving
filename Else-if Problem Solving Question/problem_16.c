/*
Write a C program to read roll no, name, and marks of three subjects and
calculate the total, percentage, and division:
● Input the Roll Number of the student:784.
● Input the Name of the Student: James.
● Input the marks of Physics, Chemistry and Computer Application: 70
80 90

80-100 => 1st Division
60-80 => 2nd Division
40-60 => 3rd Division
Percentage < 40 = Fail

Expected Output :
● Roll No: 784,
● Name of Student: James,
● Marks in Physics: 70,
● Marks in Chemistry: 80,
● Marks in Computer Application: 90,
● Total Marks = 240,
● Percentage = 80.00,
● Division = First
 */
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter the Student Name:\n");
    scanf("%s", &name);
    int roll, physics, chemistry, computerApplication, total = 0;
    printf("Enter the Student Roll:\n");
    scanf("%d", &roll);
    printf("Enter the Physics Marks:\n");
    scanf("%d", &physics);
    printf("Enter the Chemistry Marks:\n");
    scanf("%d", &chemistry);
    printf("Enter the Computer Application Marks:\n");
    scanf("%d", &computerApplication);

    total = physics + chemistry + computerApplication;
    float percentage;
    percentage = total / 3.0;

    printf("Name:\t%s\n", name);
    printf("Roll:\t%d\n", roll);
    printf("Total:\t%d\n", total);
    printf("Percentage:\t%f\n", percentage);

    if (physics > 40 && chemistry > 40 && computerApplication > 40)
    {
        if (percentage >= 80 && percentage <= 100)
        {
            printf("Division:\tFirst Division");
        }
        else if (percentage >= 60 && percentage < 80)
        {
            printf("Division:\tSecond Division");
        }
        else
        {
            printf("Division:\tThird Division");
        }
    }
    else
    {
        printf("Division:\tFail");
    }

    return 0;
}