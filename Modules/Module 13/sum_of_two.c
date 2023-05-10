#include <stdio.h>
int main()
{
    int n, x, check = 0;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", arr[i], arr[j]);
            if (arr[i] + arr[j] == x)
            {
                check = 1;
            }
        }
    }
    if (check == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}