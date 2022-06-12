#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age >= 18) {
        printf("Yes, You will create new account!");
    }
    else {
        printf("Sorry, You will do not create account!");
    }

    return 0;
}