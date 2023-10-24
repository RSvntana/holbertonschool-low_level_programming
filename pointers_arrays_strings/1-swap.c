#include "main.h"
#include <stdio.h>

/**
 * swap - swaps the value
 * @a: int pointer type
 * @b: int pointer type
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
