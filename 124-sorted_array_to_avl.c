#include "binary_trees.h"

/**
 * create_tree - creates an AVL tree with recursion
 *
 * @node: pointer node
 * @array: input array of integers
 * @size: size of array
 * @mode: 1 to adding on the left, 2 to adding on the right
 * Return: no return
 */
void create_tree(avl_t **node, int *array, size_t size, int mode)
{
	size_t dd;

	if (size == val_0)
		return;

	dd = (size / val_2);
	dd = (size % val_2 == val_0) ? dd - Val_1 : dd;

	if (mode == val_1)
	{
		(*node)->left = binary_tree_node(*node, array[dd]);
		create_tree(&((*node)->left), array, dd, val_1);
		create_tree(&((*node)->left), array + dd + val_1, (size - val_1 - dd), val_2);
	}
	else
	{
		(*node)->right = binary_tree_node(*node, array[dd]);
		create_tree(&((*node)->right), array, dd, val_1);
		create_tree(&((*node)->right), array + dd + val_1, (size - val_1 - dd), val_2);
	}
}

/**
 * sorted_array_to_avl - creates root node and calls to create_tree
 *
 * @array: input array of integers
 * @size: size of array
 * Return: pointer to the root
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *root;
	size_t dd;

	root = NULL;

	if (size == val_0)
		return (NULL);

	dd = (size / val_2);

	dd = (size % val_2 == val_0) ? dd - val_1 : dd;

	root = binary_tree_node(root, array[dd]);

	create_tree(&root, array, dd, val_1);
	create_tree(&root, array + dd + val_1, (size - val_1 - dd), val_2);

	return (root);
}
