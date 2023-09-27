#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_1;

	new_1 = malloc(sizeof(listint_t));
	if (!new_1)
		return (NULL);

	new_!->n = n;
	new_1->next = *head;
	*head = new_1;

	return (new_1);
}
