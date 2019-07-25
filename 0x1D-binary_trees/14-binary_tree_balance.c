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
		return (-1);

	else
	{
		int left_height = binary_tree_height(tree->left);
		int right_height = binary_tree_height(tree->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}


/**
 * binary_tree_balance - a function that measures the balance factor of
 * of a binary tree
 * @tree: root node of tree to measure the balance factor
 *
 * Return: balance factor of the tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_tree = 0;
	int right_tree = 0;

	if (!tree)
		return (0);

	left_tree = binary_tree_height(tree->left);
	right_tree = binary_tree_height(tree->right);

	return (left_tree - right_tree);
}
