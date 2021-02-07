#include "sort.h"
/**
*quick_sort - quick sort with lomuto partition scheme
*@array: the array to sort
*@size: size of the array
*Return: sorted array
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}

/**
*partition_lomuto - the partition of lomuto
*@A: array to part
*@lo: hiest value
*@hi: loest value
*@size: size of the array
*Return: position
*/
int partition_lomuto(int *A, int lo, int hi, size_t size)
{
	int pivot = A[hi];
	int j = lo - 1;
	int i;

	for (i = lo; i < hi; i++)
		if (A[i] < pivot)
		{
			j = j + 1;
			swap(&A[i], &A[j]);
			if (j != i)
				print_array(A, size);
		}
	swap(&A[hi], &A[j + 1]);
	if (hi != (j + 1))
		print_array(A, size);
	return (j + 1);
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

/**
*quicksort - quick sort with 3 elements to pass
*@A: array
*@lo: hiest
*@hi: loest
*@size: size of the array
*Return: noth
*/
void quicksort(int *A, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition_lomuto(A, lo, hi, size);
		quicksort(A, lo, p - 1, size);
		quicksort(A, p + 1, hi, size);
	}
}
