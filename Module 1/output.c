#include <stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%d%c %d%c", &a, &c, &b, &c); // or
    // scanf("%d%% %d%%", &a,&b)
    printf("%d%c %d%c", a, c, b, c); // or
    // printf("%d%% %d%%",a,b)
}