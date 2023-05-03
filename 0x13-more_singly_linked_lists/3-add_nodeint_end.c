#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the end of a listint_t
 * @head: pointer to the first node
 * @n: new node
 *
 * Return: pointer to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(list_t));
	listint_t *node;

	if (!head || !nem_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		node = *head;

		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}
