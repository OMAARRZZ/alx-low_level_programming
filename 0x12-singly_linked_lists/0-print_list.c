#include"lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		else
		{
			size_t len = h->len;
			const char *str = h->str;
			size_t i;
			_putchar('[');
			for (i = 0; i < len; i++)
			{
				_putchar(str[i]);
			}
			_putchar('[');
			_putchar(' ');
			_putchar('(');
			_putchar('0');
			_putchar(')');
			_putchar('\n');
		}
		h = h->next;
		count++;
	}
	return (count);
}
