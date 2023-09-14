#include "hash_tables.h"

/**
 * hash_table_print - print a hash table.
 * @ht: ptr to table.
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *n;
unsigned long int a = 0;

if (!ht)
return;

printf("{");

for (; a < ht->size; a++)
{
if (ht->array[a] != NULL)
{
n = ht->array[a];
printf("'%s': '%s'", n->key, n->value);
while ((n = n->next) != NULL)
{
printf(", '%s': '%s'", n->key, n->value);
}
if (a < ht->size - 1)
printf(", ");
}
}
printf("}\n");
}
