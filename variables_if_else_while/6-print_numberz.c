#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '9' ; i >= '0'; i--)
	{
		putchar (i);
	}
	putchar('\n');

		return (0);
}
