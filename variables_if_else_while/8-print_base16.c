#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0 ; i <= 9; i++)
	{
		char num = i + '0';

		putchar(num);
	}
	for (c = 'a' ; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
