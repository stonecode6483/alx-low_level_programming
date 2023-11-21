#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data
 * (n) of a listint_t linked list
 * @head: fist node of the list
 * Return:sum of the result
 */
int sum_listint(listint_t *head)
{
		listint_t *temp = head;
		int sum = 0;

		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
}

