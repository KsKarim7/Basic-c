#include <stdio.h>
int func(int i)
{
    if (i == 5)
    {
        return i;
    }
    else
    {
        printf("%d\n", i);
        func(i + 1);
    }
}
int main()
{
    int sum = 0;
    func(sum);
    // printf("%d\n", func(sum));
}