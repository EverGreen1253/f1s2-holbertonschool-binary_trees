#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - check if tree full
 * @tree: the tree
 *
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 1;

	if (tree == NULL ||
		(tree != NULL && (tree->left == NULL || tree->right == NULL)))
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)/* leaf */
	{
		return (1);
	}

	is_full = binary_tree_is_full(tree->left);
	if (is_full == 0)
	{
		/* no point in checking the other branch */
		return (0);
	}

	is_full = is_full && binary_tree_is_full(tree->right);

	return (is_full);
}

