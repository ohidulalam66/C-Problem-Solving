#include <stdio.h>

int main()
{
    float gpa;

    printf("Enter your GPA scale 2.00-5.00:");
    scanf("%f", &gpa);

    if (gpa <= 5.00 && gpa >= 2.00)
    {
        printf("Welcome to our University. \n");
    }
    else
    {
        printf("Sorry your aren't Selected in our University.\n");
    }

    return 0;
}