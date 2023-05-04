#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", &a);
    int count = 0;
    // while(int i = a[])
    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d\n", count);
    // or
    int len = strlen(a);
    printf("%d", len);
    return 0;
}