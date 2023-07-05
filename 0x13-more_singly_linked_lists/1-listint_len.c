#include "lists.h"
/**
 * listint_len - returns the length of a linked listint_t
 * @h: pointer to the list_t
 * Return: number of elements in the linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
