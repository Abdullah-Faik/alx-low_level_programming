#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nd;

	nd = malloc(sizeof(dlistint_t));
	if (nd == NULL || head == NULL)
		return (NULL);
	nd->n = n;
	nd->next = *head;
	nd->prev = NULL;
	if (*head != NULL)
		(*head)->prev = nd;
	*head = nd;
	return (*head);
}
