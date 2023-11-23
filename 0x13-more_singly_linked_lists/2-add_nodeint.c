#include "lists.h"
/**
* add_nodeint -  a function that adds a new
* node at the beginning of a listint_t list.
* @head: pointer to the first node
* @n: new node data
* Return: pointer to the new node,or NULL if fail
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;

return (new);
}
