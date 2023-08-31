#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - get height from specified node
 * @tree: the tree
 *
 * Return: the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 1, r = 1, final = 1;

	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL)) 
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		l = l + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		r = r + binary_tree_height(tree->right);
	}

	final = (l > r) ? l : r;

	return (final);
}

