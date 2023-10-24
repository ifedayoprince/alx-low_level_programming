/*
 * File: 1-listint_len.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements.
 * @h: A pointer to the head.
 *
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
