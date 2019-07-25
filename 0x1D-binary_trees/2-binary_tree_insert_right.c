#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, NULL on failure, NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_right = NULL;
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	/* if parent->right exists, shift node to new nodes right */
	if (parent->right != NULL)
		temp_right = parent->right;
	/* create new node for at parent */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	parent->right = new_node;
	/* add old right node to new right node if exists */
	if (temp_right)
	{
		new_node->right = temp_right;
		temp_right->parent = new_node;
	}

	return (new_node);
}
