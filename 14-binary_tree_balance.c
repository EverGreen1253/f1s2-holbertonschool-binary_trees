#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - calculate the balance of the tree
 * @tree: the tree
 *
 * Return: the node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;
	int final = 0;

	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		l = _get_depth(tree->left);
	}

	if (tree->right != NULL)
	{
		r = _get_depth(tree->right);
	}

	final = (int)l - (int)r;

	return (final);
}

/**
 * _get_depth - get depth from specified node
 * @tree: the tree
 *
 * Return: the node
 */
size_t _get_depth(const binary_tree_t *tree)
{
	size_t l = 1, r = 1, final = 1;

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
		l = l + _get_depth(tree->left);
	}

	if (tree->right != NULL)
	{
		r = r + _get_depth(tree->right);
	}

	final = (l > r) ? l : r;

	return (final);
}
