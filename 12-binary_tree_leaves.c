#include "binary_trees.h"

/**
 * binary_tree_leaves- counts leaves in binary tree
 * @tree: tree to count from
 * Return : Number of trees if not NULL else 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
