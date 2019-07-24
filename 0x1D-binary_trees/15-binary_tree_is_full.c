#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: root node of the tree to check
 *
 * Return: 1 if tree is full, 0 if not, or 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* check node first for children */
	if (!tree->left && !tree->right)
		return (1);
	/* check node for both children */
	else if (tree->left && tree->right)
		/* check node's children recursively */
		if (binary_tree_is_full(tree->left) &&
		    binary_tree_is_full(tree->right))
			return (1);

	return (0);
}
