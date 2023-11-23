#include "main.h"
/**
 * print_binary - convert a decimal to a binary.
 * @n: the given decimal number.
 * Return: nothing.
*/

void print_binary(unsigned long int n)
{
	int shift;
	unsigned long int l;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (l = n, shift = 0; (l >>= 1) > 0; shift++)
		;

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
