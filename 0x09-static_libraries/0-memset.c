#include "main.h"

/**
* _memset - fill a block of memory with a specific value given
* @s: starting address of memory to be filled
* @b: the desired value
* @n: number of bytes to be changed
*
* Return: changed array with new value for n bytes (s)
*/

char *_memset(char *s, char b, unsigned int n)
{
	int loopCount;

	for (loopCount = 0; n > 0; loopCount++)
	{
	s[loopCount] = b;
	n--;
	}
	return (s);
}
