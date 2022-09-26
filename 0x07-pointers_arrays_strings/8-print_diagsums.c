#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: pointer to start of matrix
 * @size: width of the matrix column
 * Description: Prints the sum of the two diagonals of a
 * square matrix of integers
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, p,  = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - i - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
