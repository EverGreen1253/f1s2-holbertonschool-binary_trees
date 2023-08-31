#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - get depth from specified node
 * @tree: the tree
 *
 * Return: the node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t value = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL)
	{
		value = value + binary_tree_leaves(tree->left);
	}

	if (tree->right != NULL)
	{
		value = value + binary_tree_leaves(tree->right);
	}

	return (value);
}

