#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else
	{
		int left_height = binary_tree_height(tree->left);
		int right_height = binary_tree_height(tree->right);

		if (!tree->right && !tree->left)
		{
			left_height--;
			right_height--;
		}

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);

	}
}
