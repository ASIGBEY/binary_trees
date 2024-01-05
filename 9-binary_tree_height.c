#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = val_0, r = val_0;

		l = tree->left ? val_1 + binary_tree_height(tree->left) : val_0;
		r = tree->right ? val_1 + binary_tree_height(tree->right) : val_0;
		return ((l > r) ? l : r);
	}
	return (val_0);
}
