#include "binary_trees.h"

/**
 * binary_tree_levelorder - binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *head, *tail;

	if (tree == NULL || func == NULL)
		return;

	head = tail = create_queue((binary_tree_t *)tree);
	if (head == NULL)
		return;

	while (head != NULL)
	{
		tree_enqueue(head->node, &tail, func);
		tree_dequeue(&head);
	}
}

/**
 * create_queue - create binary tree queue
 * @node: pointer to the binary tree node
 *
 * Return: void
 */
queue_t *create_queue(binary_tree_t *node)
{
	queue_t *new_node;

	new_node = malloc(sizeof(queue_t));
	if (new_node == NULL)
		return (NULL);

	new_node->node = node;
	new_node->next = NULL;

	return (new_node);
}

/**
 * free_queue - free the queue
 * @head: pointer to the tree
 *
 * Return: void
 */
void free_queue(queue_t *head)
{
	queue_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * tree_enqueue - enqueue binary tree node
 * @node: pointer to the tree
 * @tail: pointer to the queue
 * @func: function pointer
 *
 * Return: void
 */
void tree_enqueue(binary_tree_t *node, queue_t **tail, void (*func)(int))
{
	queue_t *new_node;

	func(node->n);
	if (node->left != NULL)
	{
		new_node = create_queue(node->left);
		if (!new_node)
		{
			free_queue(new_node);
			return;
		}
		(*tail)->next = new_node;
		(*tail) = new_node;
	}
	if (node->right != NULL)
	{
		new_node = create_queue(node->right);
		if (!new_node)
		{
			free_queue(new_node);
			return;
		}
		(*tail)->next = new_node;
		(*tail) = new_node;
	}
}

/**
 * tree_dequeue - dequeue the node from queue
 * @head: pointer to the tree
 *
 * Return: void
 */
void tree_dequeue(queue_t **head)
{
	queue_t *temp;

	temp = (*head)->next;
	free(*head);
	(*head) = temp;
}
