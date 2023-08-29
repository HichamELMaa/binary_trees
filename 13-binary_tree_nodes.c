#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree.
 * @tr: A pointer to the root node of the tree to count nodes in.
 *
 * Return: If tr is NULL, function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tr)
{
	size_t nodes = 0;

	if (tr)
	{
		nodes += (tr->left || tr->right) ? 1 : 0;
		nodes += binary_tree_nodes(tr->left);
		nodes += binary_tree_nodes(tr->right);
	}
	return (nodes);
}
