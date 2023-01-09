#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the left-child
 * of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent
 * is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_r;

	if (parent == NULL)
		return (NULL);

	new_r = malloc(sizeof(binary_tree_t));
	if (new_r == NULL)
		return (NULL);

	new_r->n = value;
	new_r->parent = parent;
	new_r->left = NULL;
	new_r->right = NULL;

	if (parent->right != NULL)
	{
		new_r->right = parent->right;
		new_r->right->parent = new_r;
	}
	parent->right = new_r;
	return (new_r);

}
