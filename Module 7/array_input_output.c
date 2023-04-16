#include <stdio.h>
int main()
{
    int ar[10];
    for (int i = 1; i < 10; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 9; i >= 1; i--)
    {
        printf("%d ", ar[i]);
    }
    int arra[] = {21, 3, 5, 1, 5, 6};
    printf("%d ", arra[0]);

    return 0;
}