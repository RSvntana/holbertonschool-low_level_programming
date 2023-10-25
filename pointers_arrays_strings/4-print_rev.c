#include "main.h"

/**
 * print_rev - prints a strings in reverse
 * @s: int pointer type
 */
void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		_printf("%c", s[i]);
	}
	_printf("\n");
}
