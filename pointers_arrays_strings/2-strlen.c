#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: int pointer type
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
