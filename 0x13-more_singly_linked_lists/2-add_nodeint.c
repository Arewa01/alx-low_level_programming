#include <stdio.h>
#include "lists.h"
/**
 * add_node - a function that adds a new node
 *		at the beginning of a list_t list.
 * @head: pointer to the list_t
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = (*head);

	(*head) = ptr;
	return (*head);
}
