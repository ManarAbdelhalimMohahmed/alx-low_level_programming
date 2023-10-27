#include "main.h"

/**
* _strchr - function search charchter in s
* @s: input
* @c: input
* Return: return index or 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int ix;

	for (ix = 0; s[ix] >= '\0'; ix++)
	{
		if (s[ix] == c)
			return (s + ix);
	}
	return ('\0');
}
