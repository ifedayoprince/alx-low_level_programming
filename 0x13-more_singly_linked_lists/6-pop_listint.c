/*
 * File: 6-pop_listint.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the head.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int v;

	if (*head == NULL)
		return (0);

	v = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (v);
}
