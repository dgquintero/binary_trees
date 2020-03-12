#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree : is a pointer to the root
 * Return: the size of a tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t size = 1;

	if (tree == NULL)
	return (0);
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (size);
}
