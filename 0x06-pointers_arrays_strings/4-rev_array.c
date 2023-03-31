#include "main.h"

/**
 * reverse_array - reverse the input array
 * @a: the array
 * @n: the length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int x;

	while (i < n--)
	{
		x = a[i];

		a[i] = a[n];
		a[n] = x;
		i++;
	}
}
