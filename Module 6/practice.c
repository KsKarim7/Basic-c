#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a == 122)
    {
        printf("%c", 97);
    }
    else
    {
        printf("%c", a + 1);
    }
    return 0;
}