#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @nd: A pointer to the node to find the sibling of.
 *
 * Return: If nd is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *nd)
{
	if (nd == NULL || nd->parent == NULL)
		return (NULL);
	if (nd->parent->left == nd)
		return (nd->parent->right);
	return (nd->parent->left);
}
