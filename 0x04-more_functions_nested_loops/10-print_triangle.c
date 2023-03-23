#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: input
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1, j, k;

	while (i <= size)
	{
		k = size - i;

		while (k > 0)
		{
			_putchar(' ');
			k--;
		}
		j = 1;

		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
