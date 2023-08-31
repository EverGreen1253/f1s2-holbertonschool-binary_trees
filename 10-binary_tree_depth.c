#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - get height from specified node
 * @tree: the tree
 *
 * Return: the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t value = 1;

	if ((tree == NULL) || (tree->parent == NULL))
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		value = value + binary_tree_depth(tree->parent);
	}

	return (value);
}

