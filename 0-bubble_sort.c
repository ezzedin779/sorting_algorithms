#include "sort.h"
/**
*bubble_sort - the bubble sort concept
*@array: the array to sort
*@size: the size of the array
*Return: A sorted array (nothing ...)
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
*swap - swap two elements of an array
*@a: the first element
*@b: second element
*Return: a is b and b is a
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
