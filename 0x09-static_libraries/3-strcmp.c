#include "main.h"

/**
 * _strcmp - compare s2 with  s1
 *
 * @s1: int parameter
 * @s2: int parameter
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
