#include <stdio.h>
int main()
{
    int inp;
    scanf("%d", &inp);
    for (int i = 1; i <= inp; i++)
    {
        int j = 1;
        while (j <= i)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");
    }
    return 0;
}