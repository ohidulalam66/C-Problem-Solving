// Take a character as input and check if it is in lowercase or in uppercase.
#include <stdio.h>

// ASCII value:
// A = 65, Z =90
// a = 97, z = 122
// 0 = 48, 9 = 57
// Enter = 10 *problem solve = buffering

int main()
{
    char x;
    printf("Enter a English letter:");
    scanf("%c", &x);
    // get character enter ascii value hidden
    getchar();
    printf("%c Ascii value = %d \n", x, x);
    printf("Enter a English letter:");
    scanf("%c", &x);
    // get character enter ascii value hidden
    getchar();
    printf("%c Ascii value = %d\n", x, x);
    return 0;
}
