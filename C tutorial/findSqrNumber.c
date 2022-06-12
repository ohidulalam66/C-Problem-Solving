#include<stdio.h>
#include <math.h>

int main()
{
    int x,a;
    printf("Enter the any one number:");
    scanf("%d", &x);
    a = (int) sqrt(x);

    if(a*a == x) {
        printf("%d is a Square Number\n",x);
    }
    else {
        printf("%d is a not Square Number\n",x);
    }
    return 0;
}