#include "main.h"

/**
 * _strchr - returns pinter to a char in a string
 * @s: the string
 * @c: the char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	char *i;

	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			i = &s[j];
			return (i);
		}
		j++;
	}
	return (0);
}
