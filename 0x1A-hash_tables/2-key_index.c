#include "hash_tables.h"

/**
 * key_index - Return the index at which a key/value
 * pair should be stored in array of a hash table.
 * @key: Key to get.
 * @size: TArray size of the hash table.
 * Return: Key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}