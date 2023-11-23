#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first number.
 * @m: second number to convert to.
 * Return: number of bits that was needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int different;
	int cownter;

	different = n ^ m;
	cownter = 0;

	while (different)
	{
		cownter++;
		different &= (different - 1);
	}

	return (cownter);
}
