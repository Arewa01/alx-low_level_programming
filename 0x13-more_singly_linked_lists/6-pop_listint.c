#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int p;

	if (!head || !*head)
		return (0);
	p = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (p);
}
