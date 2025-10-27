#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: chaîne à inverser
 */
void rev_string(char *s)
{
	int i = 0, j;
	char temp;

	while (s[i] != '\0')
		i++;

	j = i - 1;
	i = 0;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
