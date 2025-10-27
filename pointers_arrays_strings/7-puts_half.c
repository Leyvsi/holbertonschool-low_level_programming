#include "main.h"
#include <unistd.h>

/**
 * puts_half - affiche la seconde moitié d'une chaîne
 * @str: chaîne de caractères
 */
void puts_half(char *str)
{
	int len = 0, start, i;

	while (str[len] != '\0')
		len++;

	start = len / 2;
	if (len % 2 != 0)
		start = (len + 1) / 2;

	for (i = start; i < len; i++)
		write(1, &str[i], 1);

	write(1, "\n", 1);
}

