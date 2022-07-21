#include "binary_trees.h"

/**
 * binary_tree_leaves - function that count
 * the number of leafs.
 * @tree: A pointer to the node to measure the size
 * Return: the number of leafs in a binary tree, otherwise 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
}
