#include "main.h"

/**
 * _strlen - return string length
 *
 * @s: int parameter
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;
	return (counter);
}
