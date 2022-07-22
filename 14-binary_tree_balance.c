#include "binary_trees.h"

/**
 * b_tree_height - function that measures
 * the height of a binary tree
 * @tree: A pointer to the root node
 * Return: nothing
 */

int b_tree_height(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + b_tree_height(tree->left) : 1;
	height_r = tree->right ? 1 + b_tree_height(tree->right) : 1;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - function thatmeasures the balance
 * factor of a binary tree
 * I will ise the Inorder traversal
 * @tree: A pointer to the roote node of the tree
 * Return: the number of nodes with at least 1 child, otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lefth, right;

	if (!tree)
		return (0);
	/*The hight of left and right*/
	lefth = b_tree_height(tree->left);
	right = b_tree_height(tree->right);
	return (lefth - right);
}
