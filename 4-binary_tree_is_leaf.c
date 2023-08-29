#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @nd: Node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise or if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *nd)
{
	if (nd == NULL || nd->left != NULL || nd->right != NULL)
		return (0);

	return (1);
}
