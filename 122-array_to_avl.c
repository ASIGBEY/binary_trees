#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL, or NULL upon failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t j, k;

	if (array == NULL)
		return (NULL);

	for (j = val_0; j < size; j++)
	{
		for (k = val_0; k < j; k++)
		{
			if (array[k] == array[j])
				break;
		}
		if (k == j)
		{
			if (avl_insert(&tree, array[j]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
