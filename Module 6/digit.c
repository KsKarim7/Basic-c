#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int f = 1; f <= n; f++)
    {
        int inp;
        scanf("%d", &inp);
        do
        {
            printf("%d ", inp % 10);
            inp = inp / 10;
        } while (inp != 0);
        printf("\n");
        // do {

        // }
        // while (n != 0)
        // {
        //     scanf("%d", &x);
        //     int num;
        //     if (x >= 0)
        //     {
        //         x = x % 10;
        //         printf("%d \n", x);
        //         x = x / 10;
        //     }
        // }
    }
    return 0;
}