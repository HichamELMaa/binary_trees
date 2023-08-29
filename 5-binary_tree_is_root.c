#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @nd: Node to check
 *
 * Return: 1 if node is a root, 0 otherwise or if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *nd)
{
	if (nd == NULL || nd->parent != NULL)
		return (0);
	else
		return (1);
}
