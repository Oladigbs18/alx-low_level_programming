#include "main.h"
#include <stdio.h>
#include <stddef.h>

size_t node_count = 0; 

while (h != NULL)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%lu] %s\n", node_count, h->str);
	}

	h = h->next;
	node_count++;

	return node_count;
}
