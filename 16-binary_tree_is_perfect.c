#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree : is a pointer to the root
 * Return: the height of a node.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree : is a pointer to the root
 * Return: 1 if is full 0 if is not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_full = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_full = binary_tree_height(tree->right) + 1;
	if (left_full == right_full)
		return (1);
	return (0);
}
