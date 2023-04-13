#include "hash_tables.h"

/**
 * key_index - gives the index at wich the key value pair should be stored in the array
 * @key: the key
 * @size: the size of the array
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djKey;

	djkey = (hash_djb2(key)) % size;
	return (djKey);
}
