#include <stdio.h>
int main()
{
    int ar[5] = {12, 4, 5, 6, 71};
    // printf("0th idx value - %d\n", ar[0]);
    // printf("0th idx value - %d\n", *ar);
    printf("value of 1st idx - %d\n", ar[1]);
    printf("value of 1st idx - %d\n", *(ar + 1));
    // or
    printf("%d\n", *(4 + ar));
    return 0;
}