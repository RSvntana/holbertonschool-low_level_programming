#include "search_algos.h"

/**
 * linear_search_new - Searches for a value in an array using linear search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located,
 *         or -1 if the value is not present in the array or if the array is NULL.
 */

int linear_search_new(int *array, size_t size, int value) {
	size_t i;

	if (array == NULL) {
		return (-1);
	}

	for (i = 0; i < size; i++) {
		printf("Checking array[%lu] = %d\n", i, array[i]);

		if (array[i] == value) {
			printf("Found %d at index %lu\n", value, i);
			return (i);
		}
	}

	printf("%d is not present in the array\n", value);
	return (-1);
}
