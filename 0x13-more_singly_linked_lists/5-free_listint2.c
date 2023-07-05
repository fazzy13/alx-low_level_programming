#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	/* Set head to NULL */
	head = NULL;
}

