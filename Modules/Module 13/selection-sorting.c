#include <stdio.h>
int main()
{
    int inp;
    scanf("%d", &inp);
    int arr[inp];
    for (int i = 0; i < inp; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < inp - 1; i++)
    {
        for (int j = i + 1; j <= inp; j++)
        {
            if (arr[i] > arr[j])
            {
                int b = arr[i];
                arr[i] = arr[j];
                arr[j] = b;
            }
        }
    }
    for (int i = 0; i < inp; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}