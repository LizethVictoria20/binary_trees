#include "binary_trees.h"

/**
 * binary_tree_is_root - node of a tree is a root
 *
 * @node: node to check
 * Return: Returns
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);

}
