#include "binary_trees.h"

/**
 * binary_tree_insert_right - node insertion at the right-child of another
 * @parent: parent of the nodes
 * @value: value to insert at the right
 *
 * Return: newnode
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	if (newnode->parent == NULL)
	{
		free(newnode);
		return (NULL);
	}

	if (newnode->parent->right != NULL)
	{
		newnode->right = newnode->parent->right;
		newnode->right->parent = newnode;
	}
	newnode->parent->right = newnode;
	return (newnode);
}
