#include "main.h"
/**
 * more_numbers - print 10 times the numbers since 0 to 14
 * Return: always
 */
void more_numbers(void)
{
	int c, i;
	
	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
