#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @par: Pointer to the node to insert the right child in
 * @val: Value to store in the new node
 *
 * Return: Pointer to the newly created node, NULL on failure or if par is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *par, int val)
{
	binary_tree_t *new_node;

	if (!par)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = val;
	new_node->parent = par;
	new_node->left = NULL;
	new_node->right = par->right;
	par->right = new_node;

	if (new_node->right)
		new_node->right->parent = new_node;

	return (new_node);
}
