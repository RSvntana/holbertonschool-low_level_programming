#include "main.h"
/**
 * print_square - draw a diagonal line according parameter
 * @size: the number of times to print diagonal lines
 * Return: always
 */
void print_square(int size)
{
	int c, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
