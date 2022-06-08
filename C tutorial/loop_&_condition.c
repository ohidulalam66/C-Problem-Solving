/*Write a for loop which will print summation of all numbers which are divided by 3 and 5 between 30 t0 100*/

#include <stdio.h>

int main()
{
    int i, sum = 0;
    for (i = 30; i <= 150; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Summation :%d", sum);
    return 0;
}