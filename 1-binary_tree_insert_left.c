#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left
 * child of another node
 *
 * @parent: Pointer to node to insert child in.
 * @value: The value to store in the new node
 *
 * Return: Pointer to new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	node->right = NULL;
	node->n = value;

	if (parent->left != NULL)
	{
		temp = parent->left;
		node->left = temp;
		temp->parent = node;
	} else
	{
		node->left = NULL;
	}

	parent->left = node;

	return (node);
}
