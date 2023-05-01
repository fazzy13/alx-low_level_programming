#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *tortoise, *hare;
    size_t count = 0;

    if (!head)
        exit(98); /* if head is NULL, exit with status 98 */

    tortoise = head;
    hare = head;

    while (tortoise && hare && hare->next)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        count++;

        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare) /* if there is a loop, break the loop */
        {
            tortoise = head;
            while (tortoise != hare)
            {
                printf("[%p] %d\n", (void *)tortoise, tortoise->n);
                count++;
                tortoise = tortoise->next;
                hare = hare->next;
            }
            printf("[%p] %d\n", (void *)tortoise, tortoise->n);
            count++;
            break;
        }
    }

    /* print the remaining nodes */
    while (tortoise)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        count++;
        tortoise = tortoise->next;
    }

	return (count);
}

