#include "main.h"
/** print_triangle - print a triangle of squares according parameter
 * @size: the size of the squares triangle
 * Return: always
 */
void print_triangle(int size)
{
	int c, i, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (i + size - c; i > 1; i--)
			{
				_putchar(32);
			}
			for (n = 0; n <= c; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
