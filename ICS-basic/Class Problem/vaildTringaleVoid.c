#include <stdio.h>
void TriangleChecker(int x, int y, int z);

int main()
{
    int a, b, c;
    printf("Enter Three edges: \n");
    scanf("%d%d%d", &a, &b, &c);

    // Triangle Function Calling();
    TriangleChecker(a, b, c);
    return 0;
}

void TriangleChecker(int x, int y, int z)
{
    if ((x + y > z) && (y + z > x) && (z + x > y))
    {
        if ((x == y && y == z))
            printf("Equilateral Triangle \n");

        else if (x == y || y == z || z == x)
            printf("Isosceles Triangle \n");

        else
            printf("Scalene Triangle \n");
    }
    else
        printf("Invalid Triangle \n");
}