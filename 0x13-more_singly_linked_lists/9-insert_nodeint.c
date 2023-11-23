#include "lists.h"
/**
* insert_nodeint_at_index -  function that inserts a new node
* at a given position
* @head: the pointer to  first node.
* @idx:index where the new node is added
* @n: data to insert in the new node.
* Return: pointer to the new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *lat;
unsigned int j;
listint_t *temp = *head;

lat = malloc(sizeof(listint_t));
if (!lat || !head)
return (NULL);
lat->n = n;
lat->next = NULL;

if (idx == 0)
{
lat->next = *head;
*head = lat;
return (lat);
}

for (j = 0; temp && j < idx; j++)
{
if (j == idx - 1)
{
lat->next = temp->next;
temp->next = lat;
return (lat);
}
else
temp = temp->next;
}
return (NULL);
}
