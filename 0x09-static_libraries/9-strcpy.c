#include "main.h"

/**
 * _strcpy - print string and new line
 *
 * @src: int parameter
 * @dest: int parameter
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
