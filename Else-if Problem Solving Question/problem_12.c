/*
Write a C program to accept the height of a person in centimeters and
categorize the person according to their height.
    - height < 150 => Short
    - height = 150 => Average height
    - height >= 165 => tall
 */
#include <stdio.h>
int main()
{
    int height;
    printf("Enter your Height in Centimeters: \n");
    scanf("%d", &height);
    if (height < 150)
        printf("You are a Short Person.");
    else if (height == 150)
        printf("You are an Average height Person.");
    else
        printf("You are Tall Person");

    return 0;
}