#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: pointer to the list_t
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = ptr;

	return (ptr);
}
