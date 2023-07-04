#include "lists.h"
/**
 * pop_listint- Deletes the head node
 * @head: Pointer to the first element
 * Return: Data inside the elements or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
