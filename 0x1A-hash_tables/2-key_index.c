#include "hash_tables.h"

/**
  * key_index - returns the hash index of a key
  * @key: the key.
  * @size: size of the array.
  *
  *Return: The hash index of a key in the array.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key) % size;

	return (hash_index);
}
