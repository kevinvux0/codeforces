// bruteforce, math

#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a == 2 || a % 2 == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}