#include "binary_trees.h"

/**
 * binary_tree_insert_right - Binary tree node that inserts
 * a node as the right-child of another node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node inserted to the
 * right-child
 * Return: a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	/*If tree is empty, create the root*/
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);
	/*Create the left node*/
	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = right_node;
		right_node->right = parent->right;
	}
	parent->right = right_node;
	return (right_node);
}
