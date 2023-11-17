#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head:pointer to the list
 * @str: string
 * Return: address to the next element,or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
