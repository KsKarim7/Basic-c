#include <stdio.h>
int main()
{
    // char a[5] = {'K','h','a','l','z'};
    char a[6] = "khalz\0";
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n", a[i]);
    // }
    printf("%s", a);
    return 0;
}