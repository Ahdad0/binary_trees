#include "binary_trees.h"

/**
 * binary_tree_insert_left - node insertion at the left-child of another
 * @parent: parent of the nodes
 * @value: value to insert at the left
 *
 * Return: newnode
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (newnode->parent == NULL)
	{
		free(newnode);
		return (NULL);
	}

	if (newnode->parent->left != NULL)
	{
		newnode->left = newnode->parent->left;
		newnode->left->parent = newnode;
	}
	newnode->parent->left = newnode;
	return (newnode);
}
