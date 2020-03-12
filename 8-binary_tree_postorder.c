#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes using pre-order traversal
 * @tree : is a pointer to the root node of the tree to traverse
 * @func : is a pointer to a function to call for each node.
 * Return: Nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* then recur on left sutree */
	binary_tree_postorder(tree->left, func);
	/* now recur on right subtree */
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
