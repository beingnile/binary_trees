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

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL || parent == NULL)
		return (NULL);
	temp = parent->left;
	node->parent = parent;
	node->right = NULL;
	node->n = value;
	if (parent->left != NULL)
	{
		node->left = temp;
		temp->parent = node;
	}
	parent->left = node;

	return (node);
}
