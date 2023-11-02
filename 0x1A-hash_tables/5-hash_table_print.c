#include "hash_tables.h"

/**
 * hash_table_print - print a hash table.
 * @ht: ptr to table.
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned char cf = 0;
hash_node_t *n;
unsigned long int a = 0;

if (!ht)
return;

printf("{");
for (; a < ht->size; a++)
{
if (ht->array[a] != NULL)
{
if (cf == 1)
printf(", ");

n = ht->array[a];
while (n)
{
printf("'%s': '%s'", n->key, n->value);
n = n->next;
if (n)
printf(", ");
}
cf = 1;
}
}
printf("}\n");
}
