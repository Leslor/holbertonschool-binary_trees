#include "binary_trees.h"

/**
 * binary_tree_insert_left - Binary tree node that inserts
 * a node as the left-child of another node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node inserted to the
 * left-child
 * Return: a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	/*If tree is empty, create the root*/
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);
	/*Create the left node*/
	left_node = binary_tree_node(parent, value);
	if (left_node == NULL)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = left_node;
		left_node->left = parent->left;
	}
	parent->left = left_node;
	return (left_node);
}
