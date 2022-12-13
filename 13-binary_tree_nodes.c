#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast a child
 * @tree: tree to count from
 * Return: Number of nodes counted else 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
