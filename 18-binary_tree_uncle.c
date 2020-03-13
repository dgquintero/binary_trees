#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node : is a pointer to the node to find the uncle
 * Return: 1 if is a sibling 0 if is not.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
        return (node->parent->parent->right);
    if (node->parent == node->parent->parent->right)
        return (node->parent->parent->left);
    return (NULL);
}
