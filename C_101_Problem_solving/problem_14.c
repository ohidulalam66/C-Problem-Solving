/*
Take temperature of Dhaka city as input in celsius scale from the user using scanf() function and convert it to fahrenheit and print it.
[formula: F = C(9/5)+32]
 */

#include <stdio.h>

int main()
{
    double celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * (9.0 / 5)) + 32;
    printf("The temperature in Fahrenheit: %.1lf", fahrenheit);
    return 0;
}