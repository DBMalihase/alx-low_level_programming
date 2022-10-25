#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - gets node at index
 * @head: linked list at head
 * @index: index of node to grab
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_count;

	for (index_count = 0; index_count < index; index_count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
