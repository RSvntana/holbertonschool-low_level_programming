#include "main.h"
#include <stdio.h>

/**
 * factorial - factial of a number
 * @n: receives int
 * Return: integer
 */

int factorial(int n)
{

	if (n >= 1)
	{
		return (n * factorial(n -1));
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (-1);
	}
}
