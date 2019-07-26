#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the sibling
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *a = node->parent->parent;
	if (node == NULL || node->parent == NULL || a == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	return (NULL);
}
