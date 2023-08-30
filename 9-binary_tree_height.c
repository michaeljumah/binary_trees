#include "binary_trees.h"

/**
 * _binary_tree_height - measures the height of the tree
 * @tree: pointer to root node
 * Return: height of the tree
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a = 0, b = 0;

	if (!tree)
		return (0);
	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);
	if (a > b)
		return (a + 1);
	else
		return (b + 1);
}

/**
 * binary_tree_height - measures the height of the tree
 * @tree: pointer to root node
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t re = 0;

	if (!tree)
		return (0);
	re = _binary_tree_height(tree) - 1;
	return (re);
}
