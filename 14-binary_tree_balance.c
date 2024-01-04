#include "binary_trees.h"

/**
 * height - Measures height of a binary tree
 *
 * @tree: tree to go through
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	size_t leftt = 0, rightt = 0;

	if (tree != NULL)
	{
		if (tree != NULL)
		{
			l = tree->left ? 1 + height(tree->left) : 1;
			r = tree->right ? 1 + height(tree->right) : 1;
		}
		return ((leftt > rightt) ? leftt : rightt);
	}
	else if (tree == NULL)
	{
		return (0);
	}
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
	int right = 0;
	int left = 0;
	int total = 0;

	if (tree != NULL)
	{
		left = ((int)height(tree->left));
		right = ((int)height(tree->right));
		total = left - right;
	}
	return (total);
}
