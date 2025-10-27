#include "main.h"

/**
 * _atoi - convertit une chaîne en entier
 * @s: chaîne à convertir
 * Return: entier converti à partir de la chaîne
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
