#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;

	if (str == NULL)
		return (NULL);

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);

	first_node->str = strdup(str);
	if (first_node->str == NULL)
	{
		free(first_node);
		return (NULL);
	}

	first_node->len = strlen(str);
	first_node->next = *head;
	*head = first_node;

	return (first_node);
}
