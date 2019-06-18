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

			/* set new values for cp */
			cp->prev = c;
			cp->next = cn;

			/* check whether next node is NULL */
			if (cn)
				cn->prev = cp;

			c->next = cp;
			/* check whether previous node is NULL */
			if (temp_cp_prev)
			{
				c->prev = temp_cp_prev;
				temp_cp_prev->next = c;
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
