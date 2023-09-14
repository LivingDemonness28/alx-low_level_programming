#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: Array size
 * Return: Ptr to newly created hash table (Success), NULL (Otherwise)
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *nt = malloc(sizeof(hash_table_t));
unsigned long int a = 0;

if (size == 0)
return (NULL);

if (nt == NULL)
return (NULL);

nt->size = size;
nt->array = malloc(sizeof(hash_node_t *) * size);
if (nt->array == NULL)
{
free(nt);
return (NULL);
}

while (a < size)
{
nt->array[a] = NULL;
a++;
}
return (nt);
}
