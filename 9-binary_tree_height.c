#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h;

	if (tree == NULL)
		return (0);

	h = find_tree_height(tree);
	return (h);
}

/**
 * max - Get tree maximum height
 * @a: a parameter
 * @b: b parameter
 *
 * Return: a or b as the maximum height
 */
size_t max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * find_tree_height - find the height of the binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: -1 if tree is NULL
 */
size_t find_tree_height(const binary_tree_t *tree)
{
	int heightleft, heightright;

	if (tree == NULL)
		return (-1);

	heightleft = find_tree_height(tree->left);
	heightright = find_tree_height(tree->right);

	return (1 + max(heightleft, heightright));
}
