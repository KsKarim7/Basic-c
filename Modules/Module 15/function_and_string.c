#include <stdio.h>
#include <string.h>
void func(char arr[])
{
    printf("%d", strlen(arr));
}
int main()
{
    char arr[20] = "Hey";
    func(arr);
    return 0;
}