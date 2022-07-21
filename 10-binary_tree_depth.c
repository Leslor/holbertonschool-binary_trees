#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures
 * the depth of a node
 * @tree: A pointer to the node to measure the depth
 * Return: the depth of the node, otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/*root depth*/
	if (!tree || !tree->parent)
		return (0);
	/*child depth*/
	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
