#include "sort.h"

/**
 * insertion_sort_list -  a function that sorts a doubly linked
 * list of integers in ascending order using the Insertion sort algorithm
 *
 * @list: head doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *target = NULL;
	listint_t *c = NULL;
	listint_t *cp = NULL;
	listint_t *cn = NULL;
	listint_t *target_next = NULL;
	listint_t *temp_cp_prev = NULL;

	if (!(*list) || !(*list)->next || !list)
		return;
	target = (*list)->next;
	while (target)
	{
		c = target;
		target_next = target->next;
		while (c->prev && (c->n < c->prev->n))
		{
			/* setup pointers for sanity */
			cp = c->prev;
			cn = c->next;
			temp_cp_prev = cp->prev;
			/* swap out c */
			cp->prev = c;
			cp->next = cn;
			if (cn)
				cn->prev = cp;
			c->next = cp;
			if (temp_cp_prev)
			{
				c->prev = temp_cp_prev;
				c->prev->next = c;
			}
			else
			{
				c->prev = NULL;
				*list = c;
			}
			print_list(*list);
		}
		target = target_next;
	}
}
