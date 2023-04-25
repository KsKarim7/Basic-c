#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int count[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 97;
        count[val]++;
        // printf("%c ", s[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        // printf("%c - %d\n", i + 97, count[i]);
        if (count[i] != 0)
        {
            printf("%c - %d\n", i + 97, count[i]);
        }
    }
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 97;
        // printf("%c - %d\n", value + 97, count[value]);
        if (count[val] != 0)
        {
            printf("%c - %d\n", val + 'a', count[val]);
        }
        count[val] = 0;
    }
    return 0;
}