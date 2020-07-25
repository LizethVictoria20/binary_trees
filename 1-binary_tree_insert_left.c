#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 * @parent: A pointer.
 * @value: New node.
 * Return: Undefined
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
