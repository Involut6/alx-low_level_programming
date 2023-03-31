#include "main.h"

/**
 * _strncat - returns concatenated string up to a point n
 * @dest: string 1
 * @src: string 2
 * @n: limit of string 2
 * Return: the address of the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
