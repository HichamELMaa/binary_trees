#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tr);
const binary_tree_t *get_leaf(const binary_tree_t *tr);
int is_perfect_recursive(const binary_tree_t *tr,
                         size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tr);

/**
 * is_leaf - Checks if a node is a leaf of a binary tree.
 * @nd: A pointer to the node to check.
 *
 * Return: If the node is a leaf, 1, otherwise, 0.
 */
unsigned char is_leaf(const binary_tree_t *nd)
{
	return ((nd->left == NULL && nd->right == NULL) ? 1 : 0);
}

/**
 * depth - Returns the depth of a given node in a binary tree.
 * @tr: A pointer to the node to measure the depth of.
 *
 * Return: The depth of the node.
 */
size_t depth(const binary_tree_t *tr)
{
	return (tr->parent != NULL ? 1 + depth(tr->parent) : 0);
}

/**
 * get_leaf - Returns a leaf of a binary tree.
 * @tr: A pointer to the root node of the tree to find a leaf in.
 *
 * Return: A pointer to the first encountered leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tr)
{
	if (is_leaf(tr) == 1)
		return (tr);
	return (tr->left ? get_leaf(tr->left) : get_leaf(tr->right));
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively.
 * @tr: A pointer to the root node of the tree to check.
 * @leaf_depth: The depth of one leaf in the binary tree.
 * @level: Level of current node.
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */
int is_perfect_recursive(const binary_tree_t *tr,
                         size_t leaf_depth, size_t level)
{
	if (is_leaf(tr))
		return (level == leaf_depth ? 1 : 0);
	if (tr->left == NULL || tr->right == NULL)
		return (0);
	return (is_perfect_recursive(tr->left, leaf_depth, level + 1) &&
		    is_perfect_recursive(tr->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tr: A pointer to the root node of the tree to check.
 *
 * Return: If tr is NULL or not perfect, 0. Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tr)
{
	if (tr == NULL)
		return (0);
	return (is_perfect_recursive(tr, depth(get_leaf(tr)), 0));
}
