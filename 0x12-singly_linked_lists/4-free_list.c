#include "lists.h"

/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

