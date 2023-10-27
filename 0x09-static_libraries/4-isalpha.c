#include "main.h"

/**
 * _isalpha - function to check if charcter is alphabet
 *
 * @c: check input of function
 *
 * Return: return 1 if 'c' is lowercase or uppercase
 *	 otherwise always 0 (success)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);

}
