#include <stdio.h>
int main()
{
    int a = 1000000000; // if you give one more place order digit it will show you a garbage number cause it can store highest 4byte integer type data . Solution for that:
    long long int b = 1000000000000;
    printf("%lld\n", b);

    double f = 2005.234234234;
    printf("%lf\n", f);
    int my_num = 100000;
    printf("%d", my_num);
    return 0;
}