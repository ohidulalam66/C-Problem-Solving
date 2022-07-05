#include <stdio.h>
#include <stdbool.h>
bool AnglesChecker(int a, int b, int c);

int main()
{
    int angle1, angle2, angle3;
    bool checker;
    printf("Enter three angles: \n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    checker = AnglesChecker(angle1, angle2, angle3);
    if (checker == true)
        printf("Angle is Valid in Triangle. \n");

    else
        printf("Angle is Invalid in Triangle. \n");

    return 0;
}

bool AnglesChecker(int a, int b, int c)
{
    if ((a + b + c) == 180 && (a != 0) && (b != 0) && (c != 0))
        return true;
    else
        return false;
}