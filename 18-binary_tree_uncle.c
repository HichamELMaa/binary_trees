#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @nd: A pointer to the node to find the uncle of.
 *
 * Return: If nd is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *nd)
{
	if (nd == NULL ||
		nd->parent == NULL ||
		nd->parent->parent == NULL)
		return (NULL);
	if (nd->parent->parent->left == nd->parent)
		return (nd->parent->parent->right);
	return (nd->parent->parent->left);
}
