#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: le number of the node
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int factor;

	if (tree == NULL)
		return (0);
	else
	{
		factor = (-1 + binary_tree_balance(tree->left)
			- binary_tree_balance(tree->right));
	}
	return (factor);
}

