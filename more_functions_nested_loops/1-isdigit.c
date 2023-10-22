#include "main.h"
/**
 * _isdigit - check if the character id digit
 * @c: the number to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
