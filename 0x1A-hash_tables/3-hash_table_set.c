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
char *now;
hash_node_t *nn;
unsigned long int ind, a;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

now = strdup(value);
if (now == NULL)
return (0);

ind = key_index((const unsigned char *)key, ht->size);
for (a = ind; ht->array[a]; a++)
{
if (strcmp(ht->array[a]->key, key) == 0)
{
free(ht->array[a]->value);
ht->array[a]->value = now;
return (1);
}
}

nn = malloc(sizeof(hash_node_t));
if (nn == NULL)
{
free(now);
return (0);
}
nn->key = strdup(key);
if (nn->key == NULL)
{
free(nn);
return (0);
}
nn->value = now;
nn->next = ht->array[ind];
ht->array[ind] = nn;
return (1);
}
