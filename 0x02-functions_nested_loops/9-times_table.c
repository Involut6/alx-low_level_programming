#include "main.h"

/**
 * times_table - prints the times table of 9 from 0 to 9
 * Return: no return statement
 */
void times_table(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			if ((i * j) < 10)
			{
				_putchar((i * j) + '0');
			}
			else if ((i * j) >= 10)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			j++;

			if (j <= 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * j) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		i++;
	}

}
