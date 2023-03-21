#include "main.h"

/**
 * _isalpha - checks if input is a letter, lower or upper case.
 * @c: character to be checked
 * Return: 1 or 0 depending on the input
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
