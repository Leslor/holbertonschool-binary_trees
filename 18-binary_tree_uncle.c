#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: pointer to the uncle of the node, otherwise NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa, *parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	grandpa =  node->parent->parent;
	parent = node->parent;
	if (grandpa->right && grandpa->left)
	{
		if (grandpa->left == parent)
			return (grandpa->right);
		return (grandpa->left);
	}
	return (NULL);
}
