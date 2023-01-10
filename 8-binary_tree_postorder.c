#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 * tree using in-order traversal
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer to a function to call each node
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

