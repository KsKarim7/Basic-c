#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    int e = 2;
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr[e][i]);
    }
    for (int i = 0; i < r; i++)
    {
        printf("%d ", arr[i][e]);
    }
    return 0;
}