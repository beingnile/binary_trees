#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node on the
 * right of a parent node
 *
 * @parent: Pointer to parent node
 * @value: Value to store in the node
 *
 * Return: Pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	temp = NULL;
	node->parent = parent;
	node->left = NULL;
	node->n = value;

	if (parent->right)
	{
		temp = parent->right;
		node->right = temp;
		temp->parent = node;
	} else
	{
		node->right = NULL;
	}
	parent->right = node;

	return (node);
}
