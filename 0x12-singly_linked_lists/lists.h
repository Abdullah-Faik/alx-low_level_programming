#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
typedef struct list_s list_t;
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
struct list_s
{
	char *str;
	unsigned int len;
	list_t *next;
};
size_t print_list(const list_t *h);
#endif