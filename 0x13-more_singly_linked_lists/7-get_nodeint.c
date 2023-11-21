#include "lists.h"
/**
 * get_nodeint_at_index -  a function that returns the nth
 * node of a listint_t linked list.
 * @head:first node of the list
 * @index:index of the node to return
 * Return:pointer to the nod to be search for.or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}
	return (temp ? temp : NULL);
}
