#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 If value is not present in array or if array is NULL,
 * otherwise return the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = 0;

	if (array == NULL || size == 0)
		return (-1);

	high = (int) size - 1;

	while ((array[low] != array[high]))
	{
		size_t pos = low + (
			((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

		if (value < array[low] || value > array[high])
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;

		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
