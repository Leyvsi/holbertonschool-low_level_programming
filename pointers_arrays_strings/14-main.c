#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char haystack[] = "Holberton School";
    char needle[] = "School";
    char *ptr;

    ptr = _strstr(haystack, needle);
    if (ptr)
        printf("Found substring: %s\n", ptr);
    else
        printf("Substring not found\n");

    return (0);
}
