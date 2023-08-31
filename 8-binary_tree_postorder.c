#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - traversal using postorder
 * @tree: the tree
 * @func: function pointer
 *
 * Return: the node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
		{
			binary_tree_postorder(tree->left, func);
		}

		if (tree->right != NULL)
		{
			binary_tree_postorder(tree->right, func);
		}

		func(tree->n);
	}
}

