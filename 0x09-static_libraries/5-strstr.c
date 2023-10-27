#include "main.h"

/**
* _strstr - Entry point function
* @haystack: input parameter
* @needle: input parameter
* Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *x = haystack;
	char *p = needle;

	while (*x == *p && *p != '\0')
	{
	x++;
	p++;
	}
	if (*p == '\0')
	return (haystack);
	}
	return (0);
	}
