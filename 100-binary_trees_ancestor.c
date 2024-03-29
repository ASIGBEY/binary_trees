#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ptr1, *pop;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	ptr1 = first->parent, pop = second->parent;
	if (first == pop || !ptr1 || (!ptr1->parent && pop))
		return (binary_trees_ancestor(first, pop));
	else if (ptr1 == second || !pop || (!pop->parent && ptr1))
		return (binary_trees_ancestor(ptr1, second));
	return (binary_trees_ancestor(ptr1, pop));
}
