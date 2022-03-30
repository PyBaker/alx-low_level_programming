#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1, if value is not present in array or if array is NULL,
 * otherwise return the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right, i, middle = 0;

	if (!array)
		return (-1);

	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		middle = (left + right) / 2;
		/* if value is greater go to the right of middle*/
		if (array[middle] < value)
			left = middle + 1;
		/* if value is smaller go to the left of middle*/
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
