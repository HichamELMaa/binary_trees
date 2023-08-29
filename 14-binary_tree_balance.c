#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tr: Tree to measure the height of
 *
 * Return: Height of the tree, 0 if tr is NULL
 */
size_t binary_tree_height(const binary_tree_t *tr)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tr)
		return (0);

	height_left = tr->left ? 1 + binary_tree_height(tr->left) : 0;
	height_right = tr->right ? 1 + binary_tree_height(tr->right) : 0;

	return (height_left > height_right ? height_left : height_right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tr: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor, 0 if tr is NULL
 */
int binary_tree_balance(const binary_tree_t *tr)
{
	int height_left, height_right;

	if (!tr)
		return (0);

	height_left = tr->left ? (int)binary_tree_height(tr->left) : -1;
	height_right = tr->right ? (int)binary_tree_height(tr->right) : -1;

	return (height_left - height_right);
}
