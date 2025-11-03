#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98];
    int i;

    _memset(buffer, 'H', 98);

    for (i = 0; i < 98; i++)
    {
        if (i % 10)
            printf(" ");
        if (!(i % 10) && i)
            printf("\n");
        printf("%02x", buffer[i]);
    }
    printf("\n");

    return (0);
}
