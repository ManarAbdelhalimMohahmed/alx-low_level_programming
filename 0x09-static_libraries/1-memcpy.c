#include "main.h"

/**
*_memcpy - a function that copies memory area
*@dest: memory where is stored
*@src: memory where is copied
*@n: number of bytes
*
*Return: copied memory with n bytes changed (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ix;

	for (ix = 0; ix < n; ix++)
	{
		dest[ix] = src[ix];
	}
	return (dest);
}
