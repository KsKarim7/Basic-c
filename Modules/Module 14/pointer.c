#include <stdio.h>
int main()
{
    int x = 7;
    int *address = &x;
    printf("%d\n", address);
    // dereference
    printf("%d\n", *address);
    *address = 56; // changing the value of the address that was located in the 'address' variable
    return 0;
}