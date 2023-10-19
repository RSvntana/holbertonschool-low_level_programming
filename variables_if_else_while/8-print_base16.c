#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9'; i++)
		for (i = 'a' ; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

		return (0);
}
