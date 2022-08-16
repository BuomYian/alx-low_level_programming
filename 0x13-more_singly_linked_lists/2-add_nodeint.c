#include "lists.h"

/**
  *add_nodeint - node to be added at the beginning of the list
  *@head: pointer to the head of the list
  *@n: integer to be used as content
  *Return: addree of the newly added node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*heaad != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
