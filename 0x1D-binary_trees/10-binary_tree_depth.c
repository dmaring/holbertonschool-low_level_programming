#include "binary_trees.h"

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
		return (-1);

	else
	{
		int depth = binary_tree_depth(tree->parent);

		return (depth + 1);
	}
}
