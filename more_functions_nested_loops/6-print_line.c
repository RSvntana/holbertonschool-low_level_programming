#include "main.h"
/**
 * print_line - Draws a stright line according to parameter
 * @n: the number or lines to draw
 * Return: always
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
