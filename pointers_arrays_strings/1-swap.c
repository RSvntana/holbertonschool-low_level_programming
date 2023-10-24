#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: int pointers type
 * @b: int pointers type
 */

void swap_int(int *a, int *b)
{
	int i;

	 i = *a;
	*a = *b;
	*b = i;
}
