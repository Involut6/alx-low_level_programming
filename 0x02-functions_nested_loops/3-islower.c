#include "main.h"

/**
 * _islower - checks if input is lower case and returns 1,
 * returns 0 otherwise.
 * @c: character to be checked
 * Return: 1 or 0 depending on the input
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
