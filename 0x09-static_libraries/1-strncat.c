#include "main.h"

/**
 * _strncat - concat char 2 in char 1 with number
 *
 * @src: int parameter
 * @dest: int parameter
 * @n: int parameter
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destLength++;
	for (i = 0; i < n && *src != '\0'; i++)
		dest[destLength + i] = src[i];
	dest[destLength + n] = '\0';
	return (dest);
}
