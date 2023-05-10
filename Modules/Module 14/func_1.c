#include <stdio.h>
int sum(int x, int y)
{
    int tot = x + y;
    return tot;
}
int main()
{
    // int res = sum(2, 3);
    printf("%d", sum(10, 20));
    return 0;
}