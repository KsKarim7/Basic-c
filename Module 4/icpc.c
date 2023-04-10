// #include <stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a >= b)
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a % b == 0 || b % a == 0)
//     {
//         printf("Multiples");
//     }
//     else
//     {
//         printf("No Multiples");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a = 'q';
//     scanf("%c", &a);
//     if (a >= 97 && a <= 122)
//     {
//         int ans = a - 32;
//         printf("%c", ans);
//     }
//     else
//     {
//         int ans = a + 32;
//         printf("%c", ans);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    int ans = m / 1000;
    if (ans % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}