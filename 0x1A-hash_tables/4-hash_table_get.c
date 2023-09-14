#include "hash_tables.h"

/**
 * hash_table_get - Get value of key in a hash table.
 * @ht: ptr to table.
 * @key: Value key.
 * Return: Value (Success), NULL (Otherwise)
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *n;
unsigned long int ind;

if (!ht || !key || *key == '\0')
return (NULL);

ind = key_index((const unsigned char *)key, ht->size);
if (ind >= ht->size)
return (NULL);

for (n = ht->array[ind]; n && strcmp(n->key, key) !=0; n = n->next)
{
}

if (n == NULL)
{
return (NULL);
}
else
{
return (n->value);
}
}
