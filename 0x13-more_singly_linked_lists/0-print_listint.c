#include "lists.h"
/**
 * print_listint - prints all the element of a listint_t list
 * @h: pointer to the listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
