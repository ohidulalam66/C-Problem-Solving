#include <stdio.h>
int equation(int a, int b);

int main()
{
    int x, y, z;
    printf("Enter the Two positive Integer Numbers : \n");
    scanf("%d%d", &x, &y);

    if ((x >= 0 && y >= 0))
    {
        z = equation(x, y);
        printf("x = %d of y =%d Equation z= %d", x, y, z);
    }
    // else if ((x >= 48 && x <= 57) && (y >= 48 && y <= 57))
    //     printf("Your Number is invalid.");

    else
        printf("Your Number is Nagative.");
    return 0;
}

int equation(int a, int b)
{
    int result;
    result = 2 * a * a + b * b * b - 1;
    return result;
}