#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: node to run check on
 * Return: 1 - node is leaf
 * 0- node is not a leaf
 * 0- node is NULL
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
