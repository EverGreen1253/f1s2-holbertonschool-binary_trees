#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - get depth from specified node
 * @tree: the tree
 *
 * Return: the node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t value = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		value = value + binary_tree_size(tree->left);
	}

	if (tree->right != NULL)
	{
		value = value + binary_tree_size(tree->right);
	}

	return (value);
}

