#include "lists.h"
/**
* reverse_listint - function that reverses a listint_t linked list.
* @head: the pointer to the file to be reversed
* Return: pointer to the first node
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prv = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prv;
prev = *head;
*head = next;
}

*head = prv;

return (*head);
}
