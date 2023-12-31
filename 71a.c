// 71A - Way Too Long Words
// strings

#include <stdio.h>

int strlen(char *s)
{
    int len = 0;
    for (char *p = s; *p; ++p, ++len)
        ;
    return len;
}

int main(void)
{
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; ++i)
    {
        char buffer[101];
        scanf("%100s", buffer);
        int len = strlen(buffer);

        if (len <= 10)
        {
            printf("%s\n", buffer);
        }
        else
        {
            printf("%c%d%c\n", buffer[0], len - 2, buffer[len - 1]);
        }
    }
    return 0;
}
