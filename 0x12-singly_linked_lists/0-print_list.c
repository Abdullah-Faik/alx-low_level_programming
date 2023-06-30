#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		if (temp->s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->l, temp->s);
		temp = temp->next;
		i++;
	}
	return (i);
}
