#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - kills adds a node to the left
 * @node: the parent node
 *
 * Return: the node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if ((node->left == NULL) && (node->right == NULL))
	{
		return (1);
	}

	return (0);
}
