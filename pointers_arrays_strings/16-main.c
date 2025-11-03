#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
*_main - test print_diagsums with multiple matrices
*
*Return: Always 0.
*/
int main(void){
int i;
int size;
int *matrix;

srand(time(NULL));

/* Test 3x3 positive only */
size = 3;
matrix = malloc(sizeof(int) * size * size);
for(i = 0; i < size * size; i++)
matrix[i] = rand() % 10; /* 0-9 positive integers */

print_diagsums(matrix, size);
free(matrix);

/* Test 6x6 positive and negative */
size = 6;
matrix = malloc(sizeof(int) * size * size);
for(i = 0; i < size * size; i++)
matrix[i] = (rand() % 21) - 10; /* -10 to 10 */

print_diagsums(matrix, size);
free(matrix);

/* Test 10x10 positive and negative */
size = 10;
matrix = malloc(sizeof(int) * size * size);
for(i = 0; i < size * size; i++)
matrix[i] = (rand() % 101) - 50; /* -50 to 50 */

print_diagsums(matrix, size);
free(matrix);

return (0);
}

