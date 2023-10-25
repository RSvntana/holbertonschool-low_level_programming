#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of a string
 * @s: int pointer type
 * Return: always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (0);
}
