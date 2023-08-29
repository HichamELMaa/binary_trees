#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tr: Tree to measure the height of
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tr)
{
	size_t ht_left = 0;
	size_t ht_right = 0;

	if (!tr)
		return (0);

	ht_left = tr->left ? 1 + binary_tree_height(tr->left) : 0;
	ht_right = tr->right ? 1 + binary_tree_height(tr->right) : 0;
	return (ht_left > ht_right ? ht_left : ht_right);
}
