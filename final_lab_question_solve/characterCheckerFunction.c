#include <stdio.h>
#include <stdbool.h>

int CharacterChecker(char x);

int main()
{
    char ch;
    printf("Enter the Character: \t");
    scanf("%c", &ch);
    // CharacterChecker {a, f, g, i, t}
    int result = CharacterChecker(ch);
    if (result == true)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}

int CharacterChecker(char x)
{
    if (x == 'a' || x == 'f' || x == 'g' || x == 'i' || x == 't' || x == 'A' || x == 'F' || x == 'G' || x == 'I' || x == 'T')
        return true;

    else
        return false;
}