#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @nd: Node to calculate the depth of
 *
 * Return: Depth of the node, 0 if nd is NULL
 */
size_t binary_tree_depth(const binary_tree_t *nd)
{
	size_t depth = 0;

	if (!nd)
		return (0);

	while (nd->parent)
	{
		depth++;
		nd = nd->parent;
	}

	return (depth);
}
