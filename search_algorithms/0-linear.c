#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 * @arr: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @val: Value to search for.
 *
 * Return: Index of the value or -1 if not found or if the array is NULL.
 */
int linear_search(int *arr, size_t size, int val)
{
	size_t i;

	if (arr == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked arr[%lu] = [%d]\n", i, arr[i]);

		if (arr[i] == val)
			return (i);
	}

	return (-1);
}
