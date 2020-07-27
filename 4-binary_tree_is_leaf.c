#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  a binary tree node is a leaf
 *
 * @node: pointer to the node being checked
 * Return: Returns
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right || node->left)
		return (0);
	return (1);
}
