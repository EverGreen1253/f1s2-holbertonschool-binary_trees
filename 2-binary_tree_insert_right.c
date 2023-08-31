#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a node to the right
 * @parent: the parent node
 * @value: the value to chuck in
 *
 * Return: the node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *b;

	if (parent == NULL)
	{
		exit(98);
	}

	b = malloc(sizeof(binary_tree_t));
	if (b == NULL)
	{
		return (NULL);
	}

	b->n = value;

	/* Consider if position is occupied or not */
	if (parent->right != NULL) /* occupied */
	{
		b->parent = parent;
		b->right = parent->right;
		b->left = NULL;

		parent->right->parent = b;
	}
	else /* unoccupied */
	{
		b->parent = parent;
		b->left = NULL;
		b->right = NULL;
	}

	parent->right = b;

	return (b);
}
