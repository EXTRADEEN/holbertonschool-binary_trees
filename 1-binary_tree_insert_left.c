#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent
 * is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_l;

	if (parent == NULL)
		return (NULL);

	new_l = malloc(sizeof(binary_tree_t));
	if (new_l == NULL)
		return (NULL);

	new_l->n = value;
	new_l->parent = parent;
	new_l->left = NULL;
	new_l->right = NULL;

	if (parent->left != NULL)
	{
		new_l->left = parent->left;
		new_l->left->parent = new_l;
	}
	parent->left = new_l;
	return (new_l);

}
