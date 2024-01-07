#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);

	count = node_count(tree);
	return (is_complete(tree, 0, count));
}


/**
 * is_complete - function to calculate binary tree completion
 * @root: pointer to the root
 * @index: tree indext
 * @node_count: count nodes in the tree
 *
 * Return: 1 if it is complete otherwise 0
 */
int is_complete(const binary_tree_t *root, int index, int node_count)
{
	if (root == NULL)
		return (1);

	if (index >= node_count)
		return (0);

	return (
			is_complete(root->left, 2 * index + 1, node_count) &&
			is_complete(root->right, 2 * index + 2, node_count)
	       );
}

/**
 * node_count - function to count nodes in the tree
 * @node: pointer to the root
 *
 * Return: 0 if node is NULL
 */
int node_count(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (1 + node_count(node->left) + node_count(node->right));
}
