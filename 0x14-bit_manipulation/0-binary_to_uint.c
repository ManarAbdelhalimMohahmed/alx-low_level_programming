#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: the binary number.
 * Return: the converted number.
*/
unsigned int binary_to_uint(const char *b)
{
	int lenth, i, power = 1;
	unsigned int converted = 0;

	if (!b)
		return (0);

	for (lenth = 0; b[lenth] != '\0'; lenth++)
		if (b[lenth] != '0' && b[lenth] != '1')
			return (0);

	lenth--;

	for (i = 0; b[i] != '\0'; i++, lenth--)
	{
		if (i >= 1)
			power *= 2;
		if (b[lenth] == '1')
			converted += power;
	}

	return (converted);
}
