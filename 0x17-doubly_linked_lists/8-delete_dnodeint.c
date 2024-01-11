#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a dlistint_t list
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
return (-1);

unsigned int i;
dlistint_t *current;

for (i = 0, current = *head; current != NULL && i < index; i++)
current = current->next;

if (current == NULL)
return (-1);

if (current->prev != NULL)
current->prev->next = current->next;
else
*head = current->next;

if (current->next != NULL)
current->next->prev = current->prev;

/* Explicitly handle deletion of the last node */
if (current->prev == NULL && current->next == NULL)
*head = NULL;

free(current);

return (1);
}
