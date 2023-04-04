#include "main.h"

size_t list_len(const list_t *h)
{
	int pos;
	size_t result = 0;

	for (pos = 0; h[0] != NULL; pos++)
	{
		result++;
	}
	return (result);
}
