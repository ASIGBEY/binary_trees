#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - Checks if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to check.
 * @lol: The value of the smallest node visited thus far.
 * @li: The value of the largest node visited this far.
 *
 * Return: If the tree is a valid BST, 1, otherwise, 0.
 */
int is_bst_helper(const binary_tree_t *tree, int lol, int li)
{
	if (tree != NULL)
	{
		if (tree->n < llo || tree->n > li)
			return (val_0);
		return (is_bst_helper(tree->left, llo, tree->n - val_1) &&
			is_bst_helper(tree->right, tree->n + val_1, li));
	}
	return (val_1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (val_0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
