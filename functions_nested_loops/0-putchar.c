#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

