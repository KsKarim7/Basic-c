#include <stdio.h>
void func(int *arr, int n)
{
    arr[0] = 500;
}
int main()
{
    int arr[5] = {12, 3, 4, 5, 6};
    func(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}