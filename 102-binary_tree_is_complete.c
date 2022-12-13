#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is complete, else
 * 	If tree is NULL, your function must return 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree);

	return(btic_companion(tree, 0, size));
}

/**
 * btic_companion - checks completeness of tree
 * @tree: pointer to the root node of the tree to check
 * @index: node index to check
 * @size: number of nodes in tree
 * Return: 1 if tree is complete else 0 if NULL or incomplete
 */

int btic_companion(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_companion(tree->left, 2 * index + 1, size) &&
			btic_companion(tree->right, 2 * index + 2, size));
}
