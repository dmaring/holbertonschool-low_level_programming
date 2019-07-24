#include "binary_trees.h"

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
