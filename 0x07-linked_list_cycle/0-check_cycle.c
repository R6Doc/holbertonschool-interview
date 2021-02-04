#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks for a circle in a linked list
 * @list: pointer the list
 * Return: 0 if no circle, 1 if circle
 */
int check_cycle(listint_t *list)
{
	listint_t *scheck = list, *fcheck = list;

	while (scheck && fcheck && fcheck->next)
	{
		scheck = scheck->next;
		fcheck = fcheck->next->next;
		if (scheck == fcheck)
		{
			return (1);
		}
	}
	return (0);
}
