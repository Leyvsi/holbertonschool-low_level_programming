#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char src[98] = {0};
    char dest[98];
    int i;

    for (i = 0; i < 98; i++)
        src[i] = 'H';

    _memcpy(dest, src, 98);

    for (i = 0; i < 98; i++)
    {
        if (i % 10)
            printf(" ");
        if (!(i % 10) && i)
            printf("\n");
        printf("%02x", dest[i]);
    }
    printf("\n");

    return (0);
}
