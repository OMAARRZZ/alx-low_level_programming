#include "main.h"
#include <stdio.h>
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to the head of the list
 * Return: The number of nodes
 */
size_t printg_list(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
