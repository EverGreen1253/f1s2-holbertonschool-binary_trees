#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: the tree
 *
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l;
	int r;

	if (tree == NULL)
	{
		return (0);
	}

	l = binary_tree_is_perfect(tree->left);
	r = binary_tree_is_perfect(tree->right);

	if (l == 0 && r == 0) /* leaf */
	{
		return (1);
	}

	/* non-zero values */
	if (l == r)
	{
		/* root */
		if (tree->parent == NULL)
		{
			return (1);
		}
		else
		{
			return (l + 1);
		}
	}
	else
	{
		return (0);
	}
}

