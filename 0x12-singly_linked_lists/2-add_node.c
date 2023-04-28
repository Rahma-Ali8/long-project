#include "lists.h"

/**
 * add_node - adds a node to the start
 * @head: address of pointer
 * @str: str of node
 *
 * Return: size of list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);

	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
	}
}
