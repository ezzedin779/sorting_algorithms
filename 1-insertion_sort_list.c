#include "sort.h"
/**
*insertion_sort_list - the insertion sort concept
*@list: the list to sort
*Return: A sorted array (nothing ...)
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *cu = NULL;
	listint_t *cu2 = NULL, *head = NULL;
	listint_t *tmp0 = NULL, *tmp1 = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;
	head = (*list)->next;
	while (head)
	{
		cu = head;
		cu2 = cu->prev;
		while (cu2 && cu2->n > cu->n)
		{
			tmp0 = cu->next;
			tmp1 = cu2->prev;
			cu2->next = cu->next;
			cu->prev = cu2->prev;
			cu2->prev = cu;
			cu->next = cu2;
			if (tmp1)
				tmp1->next = cu;
			if (tmp0)
				tmp0->prev = cu2;
			if (!cu->prev)
				*list = cu;
			print_list(*list);
			cu2 = cu->prev;
		}
		head = head->next;
	}
}
