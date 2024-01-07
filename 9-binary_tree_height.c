#include "binary_trees.h"

/**
 * binary_tree_height - Finds the height of a binary
 * tree
 *
 * @tree: Pointer to the root node
 *
 * Return: The height of the binary tree, 0 if tree is
 * NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l_height = binary_tree_height(tree->left) + 1;
	r_height = binary_tree_height(tree->right) + 1;

	if (l_height > r_height)
		return l_height;
	else
		return r_height;
}
