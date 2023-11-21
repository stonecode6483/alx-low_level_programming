#include "lists.h"
/**
 * add_nodeint_end - a function that add node at the end of the list
 * @head: the first nodes
 * @n:the nodes data
 * Return: nodes or null if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lateef = 0;
	listint_t *temp = 0;

	lateef = malloc(sizeof(listint_t));
	if (!lateef)
		return (NULL);
	lateef->n = n;
	lateef->next = NULL;
	if (*head == NULL)
	{
		*head = lateef;
		return (lateef);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = lateef;
	return (lateef);
}
