#include "main.h"
#include <unistd.h>

void print_rev(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    while (len > 0)
    {
        len--;
        write(1, &s[len], 1);
    }
    write(1, "\n", 1);
}
