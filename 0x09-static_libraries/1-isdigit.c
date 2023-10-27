#include "main.h"

/**
 * _isdigit - function to check if charcter is digit
 *
 * @c: check input of function
 *
 * Return: return 1 if 'c' is digit otherwise always 0 (success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
