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
 * binary_depth - function that measures the depth of a node in
 * a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the binary tree at pointer tree
 */
size_t binary_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	else
	{
		int depth = binary_depth(tree->parent);

		return (depth + 1);
	}
}


/**
 * binary_tree_depth - function that measures the depth of a node in
 * a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the binary tree at pointer tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_depth(tree));
}

/**
 * binary_tree_full - a function that checks if a binary tree is full
 * @tree: root node of the tree to check
 * @max_depth: maximum depth of the tree
 *
 * Return: 1 if tree is full, 0 if not, or 0 if tree is NULL
 */
int binary_tree_full(const binary_tree_t *tree, size_t max_depth)
{
	if (!tree)
		return (0);

	/* check node first for children */
	if ((!tree->left && !tree->right) &&
	    (binary_tree_depth(tree) == max_depth))
		return (1);
	/* check node for both children */
	else if (tree->left && tree->right)
		/* check node's children recursively */
		if (binary_tree_full(tree->left, max_depth) &&
		    binary_tree_full(tree->right, max_depth))
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
	size_t max_depth = 0;
	int full_tree  = 0;

	if (!tree)
		return (0);

	max_depth = binary_height(tree);

	/*
	 * check binary tree from root is a full tree each leaf depth
	 *  matches max_depth of the tree
	 */
	full_tree = (binary_tree_full(tree, max_depth)) ? 1 : 0;

	if (full_tree)
		return (1);
	else
		return (0);
}
