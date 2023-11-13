// A. Word Capitalization
// implementation, strings, *800

// ASCII [A-Z]: 65-90, [a-z]: 97-122
// uppercase: -32
// lowercase: +32

#include <stdio.h>

int main(void)
{
    char buffer[1001];
    scanf("%1000s", buffer);
    if (buffer[0] >= 97 && buffer[0] <= 122)
        buffer[0] -= 32;
    printf("%s\n", buffer);
    return 0;
}