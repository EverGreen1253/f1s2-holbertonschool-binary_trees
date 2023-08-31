#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - kills adds a node to the left
 * @parent: the parent node
 *
 * Return: the node
 */
void binary_tree_delete(binary_tree_t *parent)
{
	if (parent == NULL)
	{
		exit(98);
	}

	if (parent->left != NULL)
	{
		binary_tree_delete(parent->left);
		parent->left = NULL;
	}

	if (parent->right != NULL)
	{
		binary_tree_delete(parent->right);
		parent->right = NULL;
	}

	free(parent);
}
