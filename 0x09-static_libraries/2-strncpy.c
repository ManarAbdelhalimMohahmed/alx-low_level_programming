#include "main.h"

/**
 * _strncpy - copy  2 in  1
 *
 * @src: int parameter
 * @dest: int parameter
 * @n: int parameter
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
