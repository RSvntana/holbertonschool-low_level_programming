#include "main.h"
/**
 * print_diagonal - draws a diagonal line according parameter
 * @n: the number of times to print diagonal line
 */
void print_diagonal(int n)
{
	int c, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (i = 0; i < c; i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
