#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * is_palindrome - checks if palindrome linked list
 * @head: pointer to list
 * Return: 0 if !palindrome and 1 if palindrome
 */
int is_palindrome(listint_t **head)
{

		listint_t *aux = NULL;
		int counter = 1;
		int *array = NULL;
		int i = 0;
		int j = 1;

		if (head == NULL)
			return (0);
		if (*head == NULL)
			return (1);

		aux = *head;
		while (aux->next != NULL)
		{
			counter += 1;
			aux = aux->next;
		}
		array = malloc((counter) * sizeof(int));
		aux = *head;
		i = 0;
		while (aux->next != NULL)
		{
			array[i] = aux->n;
			aux = aux->next;
			i++;
		}
		array[i] = aux->n;

		i = 0;
		while (i < counter && j == 1)
		{
		if (array[i] != array[counter - 1 - i])
		{
			j = 0;
		}
		i++;
		}
		free(array);
		return (j);
}
