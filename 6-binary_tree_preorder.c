#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree with pre-order traversal
 * @tr: Pointer to the tree to traverse
 * @f: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tr, void (*f)(int))
{
	if (tr == NULL || f == NULL)
	{
		return;
	}

	f(tr->n);
	binary_tree_preorder(tr->left, f);
	binary_tree_preorder(tr->right, f);
}
