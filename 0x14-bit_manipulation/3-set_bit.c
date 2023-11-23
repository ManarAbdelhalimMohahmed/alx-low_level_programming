#include "main.h"
/**
 * set_bit - a function that returns the value of a bit at a given index.
 * @n: the given decimal number.
 * @index: the index of the wanted bit.
 * Return: 1 on success and -1 on fail.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int power = 1;

	if (index > 64)
		return (-1);

	for (power = 1; index > 0; index--, power *= 2)
		;
	*n += power;

	return (1);
}
