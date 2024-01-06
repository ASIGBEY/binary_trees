#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created BST, or NULL upon failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *dt = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = val_0; i < size; i++)
	{
		for (j = val_0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (bst_insert(&dt, array[i]) == NULL)
				return (NULL);
		}
	}

	return (dt);
}
