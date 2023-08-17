#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	/*dlistint_t *cur = h;*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n += 1;
		h = h->next;
	}
	return (n);
}
