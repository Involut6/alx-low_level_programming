#include "main.h"

/**
 * print_sign - prints certain character depending on the type of input gottten
 * @n: number to be checked
 * Return: 0, 1 or -1 depending on input
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
