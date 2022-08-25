/* write a c program that takes the radius of a circle as input and displays  area of that circle. note use PI as acos(-1)*/
#include <stdio.h>
#include <math.h>

#define PI acos(-1)

int main()
{
    int radius;
    float area;
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("%.2f", area);
    return 0;
}