#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in
 * a binary tree
 * @tree: pointer to the root node of the tree to count
 * the number of nodes
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (tree == NULL)
		return (0);

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	return ((tree->left != NULL || tree->right != NULL)
			+ left_node + right_node);
}
