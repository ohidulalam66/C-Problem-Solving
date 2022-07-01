/*
Check whether the triangle is equilateral, scalene, or isosceles.
Note: Before writing the program, we should know the properties of
isosceles, equilateral, and scalene triangles.
    Isosceles triangle: In geometry, an isosceles triangle is a triangle that
    has two sides of equal length.
    Equilateral triangle: In geometry, an equilateral triangle is a triangle in
    which all three sides are equal.
    Scalene triangle: A scalene triangle is a triangle that has three unequal
    sides.
 */
#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter sides of triangle:");
    scanf("%d%d%d", &x, &y, &z);
    if (x == y && y == z)
        printf("The Given Triangle is equilateral\n");
    else if (x == y || y == z || z == x)
        printf("The given Triangle is isosceles\n");
    else
        printf("The given Triangle is scalene\n");
    return 0;
}