#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a given node is a root
 * @node: is a pointer to the node to check
 * Return: 1 if node is a root and 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);


}
