#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *L = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		new->n = n;
		return (new);
	}
	while (L->next != NULL)
		L = L->next;
	L->next = new;
	new->prev = L;
	new->next = NULL;
	new->n = n;

	return (new);
}
