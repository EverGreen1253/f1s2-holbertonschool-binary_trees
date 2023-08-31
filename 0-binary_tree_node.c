#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates and populates a node
 * @parent: the parent node
 * @value: the value to chuck in
 *
 * Return: the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *b;

	b = malloc(sizeof(binary_tree_t));
	if (b == NULL)
	{
		return (NULL);
	}

	b->parent = parent;
	b->n = value;
	b->left = NULL;
	b->right = NULL;

	return (b);
}
