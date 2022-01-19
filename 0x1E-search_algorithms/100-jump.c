#include "search_algos.h"

/**
 * jump_search -  searches for a value in a sorted array
 * of integers using the jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: -1 If value is not present in array or if array is NULL
 * otherwise return the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, step = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	while (j < size && array[j] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		i = j;
		j += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, j);

	if (j >= size)
		j = size - 1;

	while (i < j && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return ((int)i);
	return (-1);
}
