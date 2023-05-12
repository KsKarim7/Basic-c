#include <stdio.h>
int main()
{
    double x = 5.62;
    double *ptr = &x;
    *ptr = 10.20;

    printf("value of x - %0.2lf\n", x);
    printf("value of x - %0.2lf\n", *ptr);
    printf("size of ptr - %d\n", sizeof(ptr));
    return 0;
}