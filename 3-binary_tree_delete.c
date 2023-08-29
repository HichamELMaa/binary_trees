#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tr: Pointer to the tree to delete
 */
void binary_tree_delete(binary_tree_t *tr)
{
	if (tr == NULL)
		return;

	if (tr->left != NULL)
		binary_tree_delete(tr->left);

	if (tr->right != NULL)
		binary_tree_delete(tr->right);

	free(tr);
}
