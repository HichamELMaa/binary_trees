#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @par: Pointer to the node to insert the left child in
 * @val: Value to store in the new node
 *
 * Return: Pointer to the newly created node, NULL on failure or if par is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *par, int val)
{
	binary_tree_t *new_node;

	if (!par)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = val;
	new_node->parent = par;
	new_node->right = NULL;
	new_node->left = par->left;
	par->left = new_node;

	if (new_node->left)
		new_node->left->parent = new_node;

	return (new_node);
}
