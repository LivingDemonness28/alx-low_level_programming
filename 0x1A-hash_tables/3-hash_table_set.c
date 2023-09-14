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
hash_node_t *nn;
char *now = strdup(value);
unsigned long int ind = key_index((const unsigned char *)key, ht->size);
unsigned long int a = ind;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

if (now == NULL)
return (0);

while (ht->array[a])
{
if (strcmp(ht->array[a]->key, key) == 0)
{
free(ht->array[a]->value);
ht->array[a]->value = now;
return (1);
}
a++;
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
