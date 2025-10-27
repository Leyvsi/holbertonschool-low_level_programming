#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_array - affiche les éléments d'un tableau d'entiers
 * @a: tableau d'entiers
 * @n: nombre d'éléments à afficher
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
