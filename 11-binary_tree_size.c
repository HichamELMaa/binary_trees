#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tr: Tree to measure the size of
 *
 * Return: Size of the tree, 0 if tr is NULL
 */
size_t binary_tree_size(const binary_tree_t *tr)
{
	if (!tr)
		return (0);

	return (binary_tree_size(tr->left) + binary_tree_size(tr->right) + 1);
}
