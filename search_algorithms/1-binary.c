#include "search_algos.h"

/**
 * binary_search_recursive - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @start: Start index of the subarray.
 * @end: End index of the subarray.
 * @value: Value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not present in the array or if the array is NULL.
 */

int binary_search_recursive(int *array, size_t start, size_t end, int value)
{
    size_t mid, index;

    while (start <= end)
    {
        printf("Searching in array:");
        for (index = start; index < end; index++)
            printf(" %d,", array[index]);
        printf(" %d\n", array[index]);

        mid = (start + end) / 2;

        if (array[mid] == value)
            return (mid);
        if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return (-1);
}

/**
 * binary_search - Wrapper function for binary_search_recursive.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located,
 * or -1 if the value is not present in the array or if the array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (binary_search_recursive(array, 0, size - 1, value));
}
