#include <stdio.h>
#include <string.h>
int main()
{
    // char a[23];
    // gets(a);
    // printf("%s", a);
    char a[23];
    fgets(a, 7, stdin);
    printf("%s", a);
    return 0;
}