#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftt = 0, rightt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			rightt = binary_tree_is_full(tree->right);
			leftt = binary_tree_is_full(tree->left);
			if (rightt == 0 || leftt == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (tree->left == NULL && tree->right == NULL)
			return (1);
		else
			return (0);
	}
}
