#include "binary_trees.h"

/**
 * binary_tree_depth - Measure depth of a node in a binary tree
 * @node: Node to calculate the depth from.
 * Return: The depth of the node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		cont++;
		tree = tree->parent;
	}
	return (cont);
}
