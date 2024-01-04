#include "binary_trees.h"

/**
 * height - Measures height of a binary tree
 *
 * @tree: tree to go through
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + height(tree->left) : 1;
		r = tree->right ? 1 + height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 *
 * @tree: tree to go through
 * Return: balanced
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		return (height(tree->left) - height(tree->right));
	}

	return (0);
}
