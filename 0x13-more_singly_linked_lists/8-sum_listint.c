#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - lists sum of linked list
 * @head: head of linked list
 * Return: value of sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
			return (0);
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
