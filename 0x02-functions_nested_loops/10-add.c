#include "main.h"

/**
 * add - returns the addition of two numbers
 * @a: an integer to be added
 * @b: an integer to be added
 * Return: Always int
 */
int add(int a, int b)
{
	int c = a + b;

	if (c >= 10)
	{
		_putchar(c / 10 + '0');
		_putchar(c % 10 + '0');
	}
	else
	{
		_putchar(c + '0');
	}
	return (0);
}
