#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("[%d]\t", h->len);
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("%s\n", h->str);
		}
		c++;
		h = h->next;
		}

		return (c);
}
