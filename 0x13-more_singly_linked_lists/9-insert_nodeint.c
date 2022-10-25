#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: linked list
 * @idx: index of node
 * @n: value of node
 * Return: newly added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp, *new_node;

	temp = *head;

	count = 0;
	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		if (count + 1 == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
	}
	free(new_node);
	return (NULL);
}
