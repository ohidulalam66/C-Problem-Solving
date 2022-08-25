/* Write a c program that takes the three sides of a triangle as input and display the area of the triangle.
s = (a + b + c)/2
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int side1, side2, side3;
    float s, area;
    printf("Enter three sides of a triangle:\n");
    scanf("%d%d%d", &side1, &side2, &side3);
    s = (side1 + side2 + side3) / 2.00;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    printf("%f\n", area);

    return 0;
}