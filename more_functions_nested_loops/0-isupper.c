#include "main.h"

/**
 * _isupper - if statement to check if the parameter is uppercase
 * @c: parameter to check
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
