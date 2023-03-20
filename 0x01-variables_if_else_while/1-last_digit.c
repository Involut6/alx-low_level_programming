#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10;

	printf("The digit of %i is", n);
	if (lastdigit > 5)
	{
		printf(" %i and is greater than 5\n", lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf(" %i and is 0\n", lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf(" %i and is less than 6 and not 0\n", lastdigit);
	}

	return (0);
}
