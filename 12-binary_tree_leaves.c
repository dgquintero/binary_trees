#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree : is a pointer to the root
 * Return: the size of a tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lv = 0;

	if (tree == NULL)
	return (0);
	lv += binary_tree_leaves(tree->left);
	lv += binary_tree_leaves(tree->right);
    if (tree->left == NULL && tree->right == NULL)
        lv++;
    return (lv);
}
