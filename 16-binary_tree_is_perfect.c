#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1, else 0 If tree is NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)pow(2, height + 1);

	return (power - 1 == nodes);
}
