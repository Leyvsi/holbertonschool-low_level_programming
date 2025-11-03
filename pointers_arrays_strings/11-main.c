#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    char string[] = "Holberton School";

    str = _strchr(string, 'l');
    printf("%s\n", str);

    str = _strchr(string, 'z');
    printf("%p\n", str);

    str = _strchr(string, '\0');
    printf("%s\n", str);

    return (0);
}
