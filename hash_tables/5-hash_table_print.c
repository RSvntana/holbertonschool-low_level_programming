#include "hash_tables.h"
/**
 * hash_table_print - that prints the hash table
 * @ht: The hash table
 * Return: Tables
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			j = 1;
		}
	}
	printf("}\n");
}
