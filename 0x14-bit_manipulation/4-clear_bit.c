#include "main.h"
/**
 * clear_bit - a function that returns the value of a bit to 0 at a given index
 * @n: the given decimal number.
 * @index: the index of the wanted bit.
 * Return: 1 on success and -1 on fail.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int lenth, i, arr[64];
	unsigned long int power;

	if (index > 64)
		return (-1);

	for (lenth = 0; *n != 0; lenth++)
	{
		arr[lenth] = *n % 2;
		*n = *n / 2;
	}

	lenth--;
	arr[index] = 0;

	for (i = 0, power = 1; lenth != -1; i++, lenth--)
	{
		if (i >= 1)
			power *= 2;
		if (arr[i] == 1)
			*n += power;
	}

	return (1);
}
