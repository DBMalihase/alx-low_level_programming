#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint - frees the list
 * @head: head of struct
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
