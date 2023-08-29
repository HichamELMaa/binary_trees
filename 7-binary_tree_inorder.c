#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree with in-order traversal
 * @tr: Pointer to the tree to traverse
 * @f: Pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tr, void (*f)(int))
{
	if (tr && f)
	{
		binary_tree_inorder(tr->left, f);
		f(tr->n);
		binary_tree_inorder(tr->right, f);
	}
}
