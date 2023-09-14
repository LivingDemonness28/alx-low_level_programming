#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: Array size
 * Return: Ptr to newly created sorted hash table (Success), NULL (Otherwise)
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *nt = malloc(sizeof(shash_table_t));
unsigned long int a = 0;

if (nt == NULL)
return (NULL);

nt->size = size;
nt->array = malloc(sizeof(shash_node_t *) * size);
if (nt->array == NULL)
return (NULL);
for (; a < size; a++)
nt->array[a] = NULL;
nt->shead = NULL;
nt->stail = NULL;
return (nt);
}

/**
 * shash_table_set - Add or update an element in a
 * sorted hash table.
 * @ht: Ptr to the sorted hash table.
 * @key: The key to add.
 * @value: Key value.
 * Return: 1 (Success), -1 (Otherwise).
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
char *now;
shash_node_t *nn = malloc(sizeof(shash_node_t)), *curr;
unsigned long int ind;

if (ht == NULL|| key == NULL || *key == '\0' || value == NULL)
return (0);

now = strdup(value);
if (now == NULL)
return (0);

ind = key_index((const unsigned char *)key, ht->size);
for (curr = ht->shead; curr; curr = curr->snext)
{
if (strcmp(curr->key, key) == 0)
{
free(curr->value);
curr->value = now;
return (1);
}
}

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

if (ht->shead == NULL)
{
nn->sprev = NULL;
nn->snext = NULL;
ht->shead = nn;
ht->stail = nn;
}
else if (strcmp(ht->shead->key, key) > 0)
{
nn->sprev = NULL;
nn->snext = ht->shead;
ht->shead->sprev = nn;
ht->shead = nn;
}
else
{
curr = ht->shead;
while (curr->snext != NULL && strcmp(curr->snext->key, key) < 0)
curr = curr->snext;
nn->sprev = curr;
nn->snext = curr->snext;
if (curr->snext == NULL)
ht->stail = nn;
else
curr->snext->sprev = nn;
curr->snext = nn;
}
return (1);
}

/**
 * shash_table_get - Get value of key in a sorted hash table.
 * @ht: ptr to sorted hash table.
 * @key: Value key.
 * Return: Value (Success), NULL (Otherwise)
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *n;
unsigned long int ind;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

ind = key_index((const unsigned char *)key, ht->size);
if (ind >= ht->size)
return (NULL);

n = ht->shead;
while (n != NULL && strcmp(n->key, key) != 0)
n = n->snext;

return ((n == NULL) ? NULL : n->value);
}

/**
 * shash_table_print - print a sorted hash table.
 * @ht: ptr to sorted hash table.
 * Return: Nothing
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *n;

if (ht == NULL)
return;

n = ht->shead;
printf("{");
while (n != NULL)
{
printf("'%s': '%s'", n->key, n->value);
n = n->snext;
if (n != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_print_rev - print a sorted hash table
 * in reverse.
 * @ht: ptr to sorted hash table.
 * Return: Nothing
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *n;

if (ht == NULL)
return;

n = ht->shead;
printf("{");
while (n != NULL)
{
printf("'%s': '%s'", n->key, n->value);
n = n->sprev;
if (n != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to a sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
shash_table_t *h = ht;
shash_node_t *n, *curr;

if (ht == NULL)
return;

n = ht->shead;
while (n)
{
curr = n->snext;
free(n->key);
free(n->value);
free(n);
n = curr;
}
free(h->array);
free(h);
}
