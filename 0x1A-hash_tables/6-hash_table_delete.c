#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int a = 0;
hash_table_t *h = ht;
hash_node_t *n, *curr;

for (; a < ht->size; a++)
{
if (ht->array[a])
{
n = ht->array[a];
while (n)
{
curr = n->next;
free(n->key);
free(n->value);
free(n);
n = curr;
}
}
}
free(h->array);
free(h);
}
