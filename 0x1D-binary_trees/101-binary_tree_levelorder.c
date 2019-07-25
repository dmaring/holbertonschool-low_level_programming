#include "binary_trees.h"

/**
 * enque - place a node at the end of the list
 * @queue: pointer to list of pointers
 * @end: index of end node
 * @node: pointer to new node
 *
 * Return: 0 on success, 1 on failure
 */
size_t enque(binary_tree_t **queue, int end, binary_tree_t *node)
{
	/* printf("ENQUE: %d at %d\n", node->n, end); */
	if (end >= 0 && node)
	{
		queue[end] = node;
	}

	return (0);
}

/**
 * deque - return the pointer at the front of the list
 * @queue: pointer to list of pointers
 * @beg: index of the beginning node in the queue
 *
 * Return: pointer to node at the beginning of the queue or 1 if error
 */
binary_tree_t *deque(binary_tree_t **queue, int beg)
{
	/* printf("DENQUE: at %d\n", beg); */
	if (beg >= 0)
	{
		/* printf("IF TRUE\n"); */
		/* printf("\tnode: %d\n", queue[beg]->n); */
		return (queue[beg]);
	}
	else
		return (NULL);
}

/**
 * binary_tree_levelorder - a function that goes through binary tree using
 * level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to function to perform on node
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	/* create a queue with pointers to front and back of queue */
	binary_tree_t **queue = NULL;
	size_t beg = 0;
	size_t end = 0;
	binary_tree_t *active_node = NULL;

	if (!tree || !func)
		return;
	queue = malloc(sizeof(binary_tree_t *) * 1024);
	func(tree->n);
	/* enque children of node */
	if (tree->left)
	{
		enque(queue, end, tree->left);
		end++;
	}
	if (tree->right)
	{
		enque(queue, end, tree->right);
		end++;
	}
	/* pop items in queue until beg > end */
	while (beg < end)
	{
		active_node = deque(queue, beg);
		beg++;
		func(active_node->n);
		if (active_node->left)
		{
			enque(queue, end, active_node->left);
			end++;
		}
		if (active_node->right)
		{
			enque(queue, end, active_node->right);
			end++;
		}
	}
	/* free the queue */
	free(queue);
}
