#include <stdio.h>
#include <math.h>
#define PI acos(-1.00)

int main()
{
    float radius, area;

    printf("Enter the radius point:\t");
    scanf("%f", &radius);
    area = PI * (radius * radius);
    printf("The circle of Area = %.2f", area);

    return 0;
}