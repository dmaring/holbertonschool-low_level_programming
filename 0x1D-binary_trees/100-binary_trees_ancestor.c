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

/**
 * binary_trees_ancestor - function that finds the lowest common ancestor
 * of two nodes
 * @first: first pointer to the first node
 * @second: second pointer to second node
 *
 * Return: pointer to lowest common ancestor or NULL if none
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *deepest = NULL;
	binary_tree_t **first_array = NULL;
	binary_tree_t **second_array = NULL;
	binary_tree_t *first_ptr = (binary_tree_t *)first;
	binary_tree_t *second_ptr = (binary_tree_t *)second;
	size_t dfirst = 0, dsecond = 0, i = 0, j = 0;

	if (!first || !second)
		return (NULL);
	dfirst = binary_tree_depth(first);
	dsecond = binary_tree_depth(second);
	deepest = (dfirst > dsecond) ? first_ptr : second_ptr;
	first = (second == deepest) ? second_ptr : first_ptr;
	first_array = malloc(sizeof(binary_tree_t *) * dfirst + 1);
	second_array = malloc(sizeof(binary_tree_t *) * dsecond + 1);
	while (first_ptr)
	{
		first_array[i] = first_ptr;
		first_ptr = first_ptr->parent;
		i++;
	}
	i = 0;
	while (second_ptr)
	{
		second_array[i] = second_ptr;
		second_ptr = second_ptr->parent;
		i++;
	}
	for (i = 0; i < dfirst + 1; i++)
	{
		for (j = 0; j < dsecond + 1; j++)
		{
			if (first_array[i]->n == second_array[j]->n)
				return (first_array[i]);
		}
	}
	return (NULL);
}
