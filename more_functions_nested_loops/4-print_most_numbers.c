#include "main.h"
/**
 * print_most_numbers - print the numbers since 0 to 9
 * Description: print the numbers excluding 2 and 4
 * Return: always
 */
void print_most_numbers(void)
{
	int c = 0;

	for (c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
