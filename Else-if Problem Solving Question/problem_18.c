/*
C program with Conditional statement to convert temperature from
Fahrenheit to Celsius and Celsius to Fahrenheit.
    ● Press c to convert the temperature from Fahrenheit to Celsius,
    ● Press f to convert temperature from Celsius to Fahrenheit
 */

#include <stdio.h>
#define c (temperature - 32) * 5.0 / 9.0 // fahrenheit to celsius
#define f (temperature * 9.0 / 5.0) + 32 // celsius to fahrenheit

int main()
{
    char input;
    float temperature, result;

    printf("Press c to convert the temperature from Fahrenheit to Celsius.\nPress f to convert the temperature from Celsius to Fahrenheit.\n");
    printf("Enter your temperature choice (c, f):");
    scanf("%c", &input);
    if (input == 'c' || input == 'C')
    {
        printf("Enter your Fahrenheit temperature :");
        scanf("%f", &temperature);
        // result = (temp - 32) * 5 / 9.0;
        result = c;
        printf("%.2f Fahrenheit to %.2fCelsius", temperature, result);
    }
    else
    {
        printf("Enter your Celsius temperature :");
        scanf("%f", &temperature);
        // result = (temp * 9.0 / 5.0) + 32;
        result = f;
        printf("%.2f Celsius to %.2f Fahrenheit", temperature, result);
    }

    return 0;
}