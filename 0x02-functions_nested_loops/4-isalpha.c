#include "main.h"
/**
 * _isalpha - function to check if c is a lowercase or uppercase letter
 * @c: is the int that we will use as argument for the function
 * Return: 0
 */
int _isalpha(int c)
{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
		return (1);
		}
		else
		return (0);
}
