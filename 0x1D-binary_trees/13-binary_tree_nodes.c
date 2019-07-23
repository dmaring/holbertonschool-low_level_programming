#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: root node of the binary tree
 *
 * Return: return the number of leaves or 0 if tree is NULL and
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else
		if (tree->left || tree->right)
		{
			return (binary_tree_nodes(tree->left) + 1 +
				 binary_tree_nodes(tree->right));
		}
		else
		{
			return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));
		}
}
