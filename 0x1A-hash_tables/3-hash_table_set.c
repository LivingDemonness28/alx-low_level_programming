#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: Ptr to the hash table.
 * @key: The key to add.
 * @value: Key value.
 * Return: 1 (Success), -1 (Otherwise).
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i = key_index((unsigned char *)key, ht->size);
hash_node_t *now = ht->array[i];
hash_node_t *nn;

if (!ht || !key || *key == '\0')
{
return (0);
}
while (now)
{
if (strcmp(now->key, key) == 0)
{
free(now->value);
now->value = strdup(value);
if (!(now->value))
{
return (0);
}
return (1);
}
now = now->next;
}
nn = malloc(sizeof(hash_node_t));
if (nn == NULL)
{
return (0);
}
nn->key = strdup(key);
if (!(nn->key))
{
free(nn);
return (0);
}
nn->next = ht->array[i];
ht->array[i] = nn;
return (1);
}
