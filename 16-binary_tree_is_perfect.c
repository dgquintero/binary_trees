#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is full
 * @tree : is a pointer to the root
 * Return: 1 if is full 0 if is not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_full += binary_tree_is_perfect(tree->left);
	if (tree->right)
		right_full += binary_tree_is_perfect(tree->right);
	if (left_full == right_full)
		return (1);
	return (0);
}
