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
	int n;
	listint_t *t;

	t = *head;
	if (t == NULL)
		return (0);
	*head = t->next;
	n = t->n;
	free(t);

	return (n);
}
