#include "lists.h"
/**
 * delete_nodeint_at_index -  a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to the  node at index
 * @index: index to the node to be deleted
 * Return: 1 on success,0 when fail
 */
 int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *lat = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (j < index - 1)
	{
		if (!temp || (!temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}
	lat = temp->next;
	temp->next = lat->next;
	free(lat);

	return (1);
}
