#include "lists.h"

/**
 * pop_listint - deletes head node of a linked lists
 * @head: pointer to the first element in linked list
 *
 * Return: the data inside elements that was deleted,
 * or 0 if the lists is empty
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
