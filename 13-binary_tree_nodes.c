#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: the tree
 *
 * Return: the node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t value = 1;

	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		value = value + binary_tree_nodes(tree->left);
	}

	if (tree->right != NULL)
	{
		value = value + binary_tree_nodes(tree->right);
	}

	return (value);
}

