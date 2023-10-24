#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data in list
 * @head: Pointer to the head of the list.
 * Return: The sum of all data, or 0 if the list is empty.
 */
int sum__listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return sum;
}
