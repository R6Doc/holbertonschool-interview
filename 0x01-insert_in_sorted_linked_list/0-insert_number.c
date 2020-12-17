#include "lists.h"
/**
 * *insert_node - Function to insert node in singly linked list
 * @head: First node of linked list
 * @number: number of node
 * Return: the address of the new node, or NULL if it failed
 **/

listint_t *insert_node(listint_t **head, int number)
{

	listint_t *new_node, *value;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = number;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if ((*head)->n > new_node->n)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (*head != NULL)
	{
		value = *head;
		while (value->next != NULL)
		{
			if (value->next->n < new_node->n)
				value = value->next;
			else
				break;
		}
		new_node->next = value->next;
		value->next = new_node;
	}
	return (new_node);
}
