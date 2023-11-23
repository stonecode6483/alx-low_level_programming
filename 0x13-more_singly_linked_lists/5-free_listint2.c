#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head:pointer ponting at  the file to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *ball;

	if (head == NULL)
		return;
	while (*head)
	{
		ball = (*head)->next;
		free(*head);
		*head = ball;
	}
	*head = NULL;
}
