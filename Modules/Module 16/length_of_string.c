#include <stdio.h>
int func(char a[], int i)
{
    if (a[i] == '\0')
        return 0;
    int l = func(a, i + 1);
    return l + 1;
}
int main()
{
    char a[] = "Hello";
    int l = func(a, 0);
    printf("%d", l);
    return 0;
}