#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - find node sibling
 * @node: the node
 *
 * Return: pointer to node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;
	int l;
	/* int r; */

	if (node == NULL || node->parent == NULL)
	{
		return (0);
	}

	parent = node->parent;
	if (parent->left == NULL || parent->right == NULL)
	{
		return (NULL);
	}
	else
	{
		l = parent->left->n;
		/* r = parent->right->n; */

		if (node->n == l)
		{
			return (parent->right);
		}
		else
		{
			return (parent->left);
		}
	}

	return (NULL);
}

