#include <stdio.h>

int strcmp(char *, char *);
int strlen(char *);
char *tolower(char *);
char *toupper(char *);

int main(void)
{
    char s1[] = "Hello world!";
    char s2[] = "Hello world!";
    printf("%d\n", strlen(s1));
    printf("%d\n", strcmp(s1, s2));
    printf("%s\n", tolower(s1));
    printf("%s\n", toupper(s1));
    return 0;
}

int strcmp(char *s1, char *s2)
{
    while (*s1 == *s2++)
        if (*s1++ == '\0')
            return 0;
    return *s1 - *(s2 - 1);
}

int strlen(char *s)
{
    int len = 0;
    for (char *p = s; *p; ++p, ++len)
        ;
    return len;
}

char *tolower(char *s)
{
    for (char *p = s; *p; ++p)
        if (*p >= 65 && *p <= 90)
            *p += 32;
    return s;
}

char *toupper(char *s)
{
    for (char *p = s; *p; ++p)
        if (*p >= 97 && *p <= 122)
            *p -= 32;
    return s;
}