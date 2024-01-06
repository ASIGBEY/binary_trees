#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 * @tree: A double pointer to the root node of the BST to insert the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tr, *new;

	if (tree != NULL)
	{
		tr = *tree;

		if (tr == NULL)
		{
			new = binary_tree_node(tr, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < tr->n) /* insert in left subtree */
		{
			if (tr->left != NULL)
				return (bst_insert(&tr->left, value));

			new = binary_tree_node(tr, value);
			if (new == NULL)
				return (NULL);
			return (tr->left = new);
		}
		if (value > tr->n) /* insert in right subtree */
		{
			if (tr->right != NULL)
				return (bst_insert(&tr->right, value));

			new = binary_tree_node(tr, value);
			if (new == NULL)
				return (NULL);
			return (tr->right = new);
		}
	}
	return (NULL);
}
