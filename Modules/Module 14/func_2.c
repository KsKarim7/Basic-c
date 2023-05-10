#include <stdio.h>
int def()
{
    int x, z;
    scanf("%d %d", &x, &z);
    int sum = z + x;
    return sum;
}

int main()
{
    printf("%d", def());
    return 0;
}