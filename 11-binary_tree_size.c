#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary
 * tree
 *
 * @tree: Pointer to the root node
 *
 * Return: The size of the binary tree, 0 if tree is
 * NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size;
	size_t r_size;

	if (tree == NULL)
		return (0);

	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (l_size + r_size + 1);
}
