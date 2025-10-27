#include "main.h"
#include <unistd.h>

/**
 * puts2 - affiche un caractère sur deux d'une chaîne
 * @str: chaîne de caractères
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
