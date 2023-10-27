#include "main.h"

/**
 * _isupper - function to check if charcter is uppercase
 *
 * @c: check input of function
 *
 * Return: return 1 if 'c' is uppercase otherwise always 0 (success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
