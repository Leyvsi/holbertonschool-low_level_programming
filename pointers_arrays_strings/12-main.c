#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char str1[] = "abcdef123";
    char str2[] = "abc";
    unsigned int len;

    len = _strspn(str1, str2);
    printf("Length: %u\n", len);

    return (0);
}
