#include<stdio.h>

int main()
{
    float mark;
    printf("Enter your and see your GPA Grade :");
    scanf("%f", & mark);

    if(mark <= 100 && mark >= 80) {
        printf("You are got A+");
    }
    else if(mark < 80 && mark >= 70) {
        printf("You are got A");
    }
    else if (mark < 70 && mark >= 60) {
        printf("You are got A-");
    }
    else if (mark < 60 && mark >= 50) {
        printf("You are got B");
    }
    else  if (mark < 50 && mark >= 40) {
        printf("You are got C");
    }
    else if (mark < 40 && mark >= 33) {
        printf("You are got D");
    }
    else {
        printf("You are got F");
    }

    return 0;
}