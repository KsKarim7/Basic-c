#include <stdio.h>
int main()
{
    int inp;
    // num =
    scanf("%d", &inp);
    int n = inp - 1;
    int k = 1;
    for (int i = 1; i <= (inp * 2) - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i <= inp - 1)
        {
            n--;
            k += 2;
            // continue;
        }
        else
        {
            n++;
            k -= 2;
        }
        printf("\n");
    }
    return 0;
}