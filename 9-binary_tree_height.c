#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: if tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a = 0, b = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	if (a >= b)
		return (a + 1);
	else
		return (b + 1);
}
