#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of
 * another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, NULL on failure, NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_left = NULL;
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	/* if parent->left exists, shift node to new nodes left */
	if (parent->left != NULL)
		temp_left = parent->left;
	/* create new node for at parent */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	parent->left = new_node;
	/* add old left node to new left node if exists */
	if (temp_left)
	{
		new_node->left = temp_left;
		temp_left->parent = new_node;
	}

	return (new_node);
}
