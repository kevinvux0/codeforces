// A. Petya and Strings
// implementation, strings, *800

#include <stdio.h>

int strcmp(char *s1, char *s2)
{
    while (*s1 == *s2++)
        if (*s1++ == '\0')
            return 0;
    return *s1 - *(s2 - 1);
}

void toLowerCase(char *b)
{
    for (char *p = b; *p; ++p)
    {
        if (*p >= 65 && *p <= 90)
        {
            *p += 32;
        }
    }
}

int main(void)
{
    char b1[101];
    char b2[101];
    scanf("%100s\n%100s", b1, b2);

    toLowerCase(b1);
    toLowerCase(b2);

    int cmp = strcmp(b1, b2);
    if (cmp < 0)
    {
        printf("%d\n", -1);
    }
    else if (cmp > 0)
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }
    return 0;
}