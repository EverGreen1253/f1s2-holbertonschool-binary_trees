#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - traversal using preorder
 * @tree: the tree
 * @func: function pointer
 *
 * Return: the node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		exit(98);
	}

	func(tree->n);

	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}

	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}
}

