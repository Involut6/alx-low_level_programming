#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		len++;
	}

	a = len - 1;

	for (c = 0; c <= a; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}

	_putchar('\n');
}
