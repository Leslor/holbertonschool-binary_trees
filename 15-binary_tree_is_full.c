#include "binary_trees.h"

/**
 * binary_tree_is_full - function that check if a
 * tree is full
 * @tree: A pointer to the roote node of the tree
 * Return: the number of nodes with at least 1 child, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lefth, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	/*The hight of left and right*/
	if (tree->left && tree->right)
	{
		lefth = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (lefth && right);
	}
	return (0);
}
