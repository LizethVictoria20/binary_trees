#include "binary_trees.h"

/**
 * binary_tree_insert_right
 *
 * @parent: node
 * @value: value 
 * Return: Returns
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = new;
	else
	{
		new->right = parent->right;
		parent->right = new;
		(new->right)->parent = new;
	}
	return (new);
}