/* Take a small letter alphabet as input from the user and print the capital version of that letter. [if user gives input 'a' you should print 'A'] */

#include <stdio.h>

int main()
{
    char letter;
    printf("Enter the small letter:");
    scanf("%c", &letter);

    /* difference of the ASCII value between every upper and lower case is 32 */
    printf("Capital letter version is : %c", letter - 32);

    return 0;
}
