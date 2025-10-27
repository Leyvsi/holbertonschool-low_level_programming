#include "main.h"

/**
 * _strcpy - copie une chaîne dans une autre
 * @dest: destination de la copie
 * @src: source de la chaîne
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
