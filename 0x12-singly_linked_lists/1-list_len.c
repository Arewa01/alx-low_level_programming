#include "lists.h"
/**
 * list_len - lists all the element of a linked list
 * @h: pointer to the list_t
 * Return: number of elements in the linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
