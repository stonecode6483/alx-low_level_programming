#include "lists.h"
/**
 * pop_listint -  a function  that deletes the head of the node listint_t
 * @head: the pointer to the head to be deleted
 * Return:the variable  in the deleted element or  0 if its empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *mktemp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	mktemp = (*head)->next;
	free(*head);
	*head = mktemp;

	return (num);
}
