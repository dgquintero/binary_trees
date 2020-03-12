#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 * @tree : is a pointer to the root
 * Return: the balance of a tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0, balance = 0;
	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;
	balance = left_height - right_height;
	return (balance);
}
