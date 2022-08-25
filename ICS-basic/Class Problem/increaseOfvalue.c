#include <stdio.h>
int main()
{
    int i = 3, j;
    ++i;     // 5
    j = i++; // 4
    printf("%d = i and %d = j", i, j);
    return 0;
}