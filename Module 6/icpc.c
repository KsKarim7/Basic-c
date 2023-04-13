#include <stdio.h>
int main()
{
    // int n;
    // scanf("%d", &n);
    // if (n == 1)
    // {
    //     printf("-1\n");
    // }
    // else
    // {
    //     for (int i = 1; i <= n; i = i + 1)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             printf("%d\n", i);
    //         }
    //     }
    // }
    // int n, a;

    // scanf("%d", &n);
    // int even = 0, odd = 0, pos = 0, neg = 0;
    // for (int i = 1; i <= n; i = i + 1)
    // {
    //     scanf("%d", &a);
    //     if (a % 2 == 0)
    //     {
    //         even += 1;
    //         if (a > 0)
    //         {
    //             pos += 1;
    //         }
    //         else if (a < 0)
    //         {
    //             neg += 1;
    //         }
    //     }
    //     else if (a % 2 != 0)
    //     {
    //         odd += 1;
    //         if (a > 0)
    //         {
    //             pos += 1;
    //         }
    //         else if (a < 0)
    //         {
    //             neg += 1;
    //         }
    //     }
    // }
    // printf("Even %d\nOdd %d\nPositive %d\nNegative %d", even, odd, pos, neg);

    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
