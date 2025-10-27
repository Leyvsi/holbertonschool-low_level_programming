#include "main.h"

/**
 * print_triangle - prints a right-angled triangle using the character #
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* imprime les espaces avant les # */
		for (j = 0; j < size - i; j++)
			_putchar(' ');

		/* imprime les # */
		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
