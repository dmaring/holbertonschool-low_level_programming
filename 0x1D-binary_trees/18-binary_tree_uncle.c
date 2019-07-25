#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: if node NULL, parent NULL or no sibling return NULL, else
 * return poitner to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *sibling = NULL;

	if ((!node) || (!node->parent))
		return (NULL);

	parent = node->parent;

	sibling = (parent->left == node) ? parent->right : parent->left;
	if (sibling)
		return (sibling);
	else
		return (NULL);
}

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: pointer to node to find the uncle
 *
 * Return: NULL if node is NULL or if no uncle, else return pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* no uncle if no node->parent */
	if (!node)
		return (NULL);

	/* return parent sibling or NULL */
	return (binary_tree_sibling(node->parent));
}
