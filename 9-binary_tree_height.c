#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightleft, heightright;

	if (tree == NULL)
		return (0);

	heightleft = binary_tree_height(tree->left);
	heightright = binary_tree_height(tree->right);

	return (1 + max(heightleft, heightright));
}

/**
 * max - Get tree maximum height
 * @a: a parameter
 * @b: b parameter
 *
 * Return: a or b as the maximum height
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}