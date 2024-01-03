#include "binary_trees.h"

/**
 * binary_tree_t - Creates a binary tree
 *
 * @parent: Pointer to the parent node
 * @value: Value stored in node
 *
 * Return: Pointer to the node, NULL if unsuccessful
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return NULL;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;
    node->n = value;

    return node;
}
