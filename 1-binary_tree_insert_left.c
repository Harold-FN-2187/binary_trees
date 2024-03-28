#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as left child node
 * @parent: pointer to node at which left child would be inserted
 * @value: value in new node
 * Return: Success - pointer to new node
 * Otherwise - NULL if parent is NULL OR on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
