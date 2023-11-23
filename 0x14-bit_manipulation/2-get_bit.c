#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: the given decimal number.
 * @index: the index of the wanted bit.
 * Return: the bit on success and -1 on fail.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int i, arr[64];

	if (index > 64)
		return (-1);

	for (i = 0; n != 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
	}

	i--;

	return (arr[index]);
}
