#include <stdio.h>
void func(double *arr, int n)
{
    // void func(int arr[], int n)  #same thing
    for (int i = 0; i < n; i++)
    {
        printf("%0.2lf\n", arr[i]);
    }
}

int main()
{
    double arr[] = {12.4, 3.1, 4.2, 1.45, 2.22};
    int sz = sizeof(arr) / sizeof(double);
    func(arr, sz);
    return 0;
}