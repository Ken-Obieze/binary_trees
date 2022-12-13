#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, max_level;

	if (!tree || !func)
		return;

	max_level = binary_tree_height(tree) + 1;

	for (level = 1; level <= max_level; level++)
		btl_companion(tree, func, level);
}

/**
 * btl_companion - traverse tree using post-order
 * @tree: tree to traverse
 * Afunc: pointer to function to call each node
 * @level: level of tree to call function
 */

void btl_companion(const binary_tree *tre, void (*func)(int))
{
	if (level == 1)
		func(tree->n);
	else
	{
		btl_companion(tree->left, func, level - 1);
		btl_companion(tree->right, func, level - 1);
	}
}
