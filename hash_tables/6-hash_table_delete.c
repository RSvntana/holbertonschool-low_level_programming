#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash tables
 * @ht: the table
 * return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *table = NULL, *ext = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	for (; i < ht->size; i++)
	{
		table = ht->array[i];
		while (table)
		{
			ext = table;
			table = table->next;
			free(ext->key);
			free(ext->value);
			free(ext);
		}
	}
	free(ht->array);
	free(ht);
}
