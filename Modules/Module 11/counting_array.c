#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count[7] = {0};
    for (int i = 0; i < n; i++)
    {
        // if (a[i] == 0)
        // {
        //     count[0]++;
        // }
        // if (a[i] == 1)
        // {
        //     count[1]++;
        // }
        // if (a[i] == 2)
        // {
        //     count[2]++;
        // }
        // if (a[i] == 3)
        // {
        //     count[3]++;
        // }
        // if (a[i] == 4)
        // {
        //     count[4]++;
        // }
        // if (a[i] == 5)
        // {
        //     count[5]++;
        // }
        // if (a[i] == 6)
        // {
        //     count[6]++;
        // }

        count[a[i]]++;
        // or
        // int val = a[i];
        // count[val]++;
    }
    // printf("0 - %d\n", count[0]);
    // printf("1 - %d\n", count[1]);
    // printf("2 - %d\n", count[2]);
    // printf("3 - %d\n", count[3]);
    // printf("4 - %d\n", count[4]);
    // printf("5 - %d\n", count[5]);
    // printf("6 - %d\n", count[6]);
    // or
    for (int i = 0; i <= 6; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }
    return 0;
}