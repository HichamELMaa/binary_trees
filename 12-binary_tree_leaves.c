#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tr: Tree to count the leaves from
 *
 * Return: Number of leaves, 0 if tr is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tr)
{
	size_t leaves = 0;

	if (tr)
	{
		leaves += (!tr->left && !tr->right) ? 1 : 0;
		leaves += binary_tree_leaves(tr->left);
		leaves += binary_tree_leaves(tr->right);
	}
	return (leaves);
}
