#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the nodes with at least 1 child in a binary tree
 * @tree : is a pointer to the root
 * Return: the size of a tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cn = 0;

	if (tree == NULL)
	return (0);

	cn += binary_tree_nodes(tree->left);
	cn += binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		cn++;
	return (cn);
}
