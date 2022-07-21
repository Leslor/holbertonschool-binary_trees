#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts
 * the nodes with at least 1 child in a binary tree
 * I will ise the Inorder traversal
 * @tree: A pointer to the roote node of the tree
 * Return: the number of nodes with at least 1 child, otherwise 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		child++;
		child += binary_tree_nodes(tree->left);
		child += binary_tree_nodes(tree->right);
	}
		return (child);
}
