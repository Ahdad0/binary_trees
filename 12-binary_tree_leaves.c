#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the
 * number of leaves
 *
 * Return: 0 if tree NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);

	count = 0;

	if (tree->left == NULL && tree->right == NULL)
		count++;

	if (binary_tree_leaves(tree->left))
		count++;
	if (binary_tree_leaves(tree->right))
		count++;

	return (count);
}
