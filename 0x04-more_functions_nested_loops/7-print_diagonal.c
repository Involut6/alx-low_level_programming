#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: the input
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1, j;

		while (i <= n)
		{
			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
