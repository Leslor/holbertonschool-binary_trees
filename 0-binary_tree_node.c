#include "binary_trees.h"

/**
 * binary_tree_node - Binary tree node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));
	if (n_node != NULL)
	{
		n_node->n = value;
		n_node->parent = parent;
		n_node->right = NULL;
		n_node->left = NULL;
	}
	return (n_node);
}
