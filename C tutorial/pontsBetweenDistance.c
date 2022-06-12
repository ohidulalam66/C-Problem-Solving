#include <stdio.h>
#include <math.h>

int main()
{
    double p = 5, q = 10, r = 15, s = 20, side1, side2, distance;

    side1 = q - p;
    side2 = s - r;
    distance = sqrt(side1 * side1 + side2 * side2);

    printf("The distance between the two points is %.2lf", distance);

    return 0;
}