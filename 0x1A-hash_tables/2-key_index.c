#include "hash_tables.h"

/**
 * key_index - generates index of a key
 * @key: key whose index is to be generated
 * @size: size of hash table(array)
 * Return: index to store the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;

	index = hash_djb2(key);

	return (index % size);
}
