#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: first input address
 * @b: second input address
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
