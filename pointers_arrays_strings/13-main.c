#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "abcdef123";
    char accept[] = "2345";
    char *ptr;

    ptr = _strpbrk(str, accept);
    if (ptr)
        printf("Found: %c\n", *ptr);
    else
        printf("No match found\n");

    return (0);
}
