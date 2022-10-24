#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node
 */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (value);
	tmp = *head;
	value = tmp->n;
	free(*head);
	*head = tmp->next;

	return (value);
}
