#include "lists.h"
/**
 * *insert_nodeint_at_index -  inserts a new node at a given position
 * @head: first node in the linked list
 * @idx:  index of the list where the new node should be added
 * @n: data to insert in the new node
 * Return: the nth mode of the linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
