/*
Write a C program to find diameter, circumference and area of circle using functions.
 */

#include <stdio.h>
#define PI 3.1416
float Diameter(float r);
float Circumference(float r);
float Area(float r);

int main()
{
    float r, d, c, a;
    scanf("%f", &r);
    d = Diameter(r);
    printf("%f\n", d);
    c = Circumference(r);
    printf("%f\n", c);
    a = Area(r);
    printf("%f\n", a);
    return 0;
}

float Diameter(float r)
{
    return 2 * r;
}

float Circumference(float r)
{
    return 2 * PI * r;
}

float Area(float r)
{
    return PI * r * r;
}