#include "main.h"

/**
* _strpbrk - Entry point function
* @s: input
* @accept: input parameter
* Return: s or NULL (Success)
*/
char *_strpbrk(char *s, char *accept)
{
int x;

	while (*s)
	{
	for (x = 0; accept[x]; x++)
	{
	if (*s == accept[x])
	return (s);
	}
	s++;
	}
	return ('\0');
	}
