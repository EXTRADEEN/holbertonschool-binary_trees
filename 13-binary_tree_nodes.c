#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * in a binary tree
 * @tree: is a pointer to the root node of the tree to count the numbe
 * r of nodes
 *
 * Return: number of the nodes with at least 1 child in a binary tree
 * or if tree
 * is NULL, the function must return 0
 */



size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else if (tree->left != NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	else if (tree->left != NULL)
		return (1 + binary_tree_nodes(tree->left));
	else if (tree->right != NULL)
		return (1 + binary_tree_nodes(tree->right));
	else
		return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
