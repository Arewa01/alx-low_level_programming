#include "lists.h"
/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list
 * @head: first node in the linked list
 * Return: returns the sum, but 0 when the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return(sum);
}
