#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree with post-order traversal
 * @tr: Pointer to the tree to traverse
 * @f: Pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tr, void (*f)(int))
{
	if (tr && f)
	{
		binary_tree_postorder(tr->left, f);
		binary_tree_postorder(tr->right, f);
		f(tr->n);
	}
}
