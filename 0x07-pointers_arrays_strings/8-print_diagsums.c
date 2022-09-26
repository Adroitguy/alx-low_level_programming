#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: pointer to start of matrix
 * @size: width of the matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int s1, s2;

	s1 = 0;
	for (i = 0; i < size; i++)
	{
		s1 = s1 + *(a + (i * (size + 1));
	}

	s2 = 0;
	for (i = 0; i < size; i++)
	{
	s2 = s2 + *(a + ((i + 1) * (size - 1)));
	}
	printf("%u, %u", s1, s2);
	putchar('\n');
																			}
