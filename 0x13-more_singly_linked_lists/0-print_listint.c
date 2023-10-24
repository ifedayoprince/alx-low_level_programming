/*
 * File: 0-print_listint.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		printf("%d\n", h->n);
		nodes++;
	}

	return (nodes);
}
