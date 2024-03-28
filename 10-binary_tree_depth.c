#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of binary tree
 * @tree: node to measure depth
 * Return: depth of tree - SUCCESS
 * 0 if tree is NULL
*/


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
