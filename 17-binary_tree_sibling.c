#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: pointer to the sibling of the node, otherwise NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	
	parent = node->parent;
	if (!node || !parent)
		return (NULL);
	if (parent->left && parent->right)
	{
		if (parent->left == node)
			return  (parent->right);
		return (parent->left);
	}
	return (NULL);
}
