#include "binary_trees.h"

/**
 * perfect_tree - function that says if a tree is perfect or not
 *
 * @tree: tree to check
 * Return: 0 if is not a perfect
 */
int perfect_tree(const binary_tree_t *tree)
{
	int leftt = 0, rightt = 0;

	if (tree->left && tree->right)
	{
		rightt = 1 + perfect_tree(tree->right);
		leftt = 1 + perfect_tree(tree->left);

		if (rightt == leftt && rightt != 0 && leftt != 0)
		{
			return (rightt);
		}

		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if it's not NULL otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int re = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		re = perfect_tree(tree);
		if (re != 0)
		{
			return (1);
		}
		return (0);
	}
}
