#include "main.h"

/**
 * _strcat - concatène deux chaînes
 * @dest: chaîne de destination (doit avoir assez d’espace)
 * @src: chaîne source à ajouter
 * Return: pointeur vers dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

