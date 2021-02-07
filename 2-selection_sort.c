#include "sort.h"
/**
*selection_sort - selection sort algorithm
*@array: the array to sort
*@size: size of the array
*Return: a sorted array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, n;

	for (i = 0; i < size - 1; i++)
	{
		n = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[n])
				n = j;
		}
		if (n != i)
		{
			swap(&array[i], &array[n]);
			print_array(array, size);
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
