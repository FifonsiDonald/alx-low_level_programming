	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (first)
				first = 0;
			else
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
