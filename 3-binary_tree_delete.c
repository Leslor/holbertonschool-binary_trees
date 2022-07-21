#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * We will use the Postorder algorithm + free() function
 *
 * @tree: A pointer to the tree we will delete
 * Return: return nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
