#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - find node uncle
 * @node: the node
 *
 * Return: pointer to node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;
	int l;
	/* int r; */

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	grandparent = node->parent->parent;
	if (grandparent->left == NULL || grandparent->right == NULL)
	{
		return (NULL);
	}
	else
	{
		l = grandparent->left->n;
		/* r = grandparent->right->n; */

		if (node->parent->n == l)
		{
			return (grandparent->right);
		}
		else
		{
			return (grandparent->left);
		}
	}

	return (NULL);
}

