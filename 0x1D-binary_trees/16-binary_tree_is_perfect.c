#include "binary_trees.h"

/**
 * binary_height - return heigh of binary tree
 * @tree: root of tree
 *
 * Return: height of tree
 */
int binary_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	else
	{
		int left_height = binary_height(tree->left);
		int right_height = binary_height(tree->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}

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
		return (binary_height(tree));
}

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

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 if tree is NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;
	int matching_height = 0;
	int full_tree  = 0;

	if (!tree)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* check left and right subtrees for matching height */
	matching_height = (height_left == height_right) ? 1 : 0;
	/* check binary tree from root is a full tree */
	full_tree = (binary_tree_is_full(tree)) ? 1 : 0;

	if (matching_height && full_tree)
		return (1);
	else
		return (0);
}
