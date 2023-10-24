#include "main.h"
#include <stdio.h>

/**
 * swap - swaps the values of two integers
 * @a: int pointers type
 * @b: int pointers type
 */

void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
}
