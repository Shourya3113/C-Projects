#include <stdio.h>

int main()
{
    int ascii = 0;
    printf("ASCII values and their equivalent characters:\n");
    while (ascii < 256)
    {
        printf("ASCII value: %d, Character: '%c'\n", ascii, ascii);
        ascii++;
    }
    return 0;
}