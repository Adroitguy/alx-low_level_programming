#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: String to reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int rev_len = strlen(s);

	while (rev_len--)
		putchar(*(s + rev_len));
	putchar(10);
}
