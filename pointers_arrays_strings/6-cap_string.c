#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
int i = 0, j;
char separators[] = " \t\n,;.!?\"(){}";

while (s[i] != '\0')
{
/* Capitalize first char of string */
if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
s[i] = s[i] - 32;

/* Check if current char is a separator */
for (j = 0; separators[j] != '\0'; j++)
{
if (s[i] == separators[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
{
s[i + 1] = s[i + 1] - 32;
break;
}
}

i++;
}

return (s);
}

