#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);
    new->str = strdup(str);
    new->len = strlen(str);
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
        return (new);
    }
    else
    {
        list_t *last = *head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new;
    }
    return (new);

    
}