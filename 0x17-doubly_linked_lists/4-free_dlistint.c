#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	dlistint_t *cur_1;

	while (cur != NULL)
	{
		cur_1 = cur->next;
		free(cur);
		cur = cur_1;
	}
}
