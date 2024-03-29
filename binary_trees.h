#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
void binary_tree_print(const binary_tree_t *);

/***********BINARY SEARCH TREE************/
typedef struct binary_tree_s bst_t;
/***********AVL TREE************/
typedef struct binary_tree_s avl_t;
/***********MAX BINARY HEAP************/
typedef struct binary_tree_s heap_t;

/************QUEUE STRUCTURE***************/
/**
 * struct queue - queue structure to store binary tree node
 * @node: binary tree node
 * @next: next node
 */
typedef struct queue
{
	binary_tree_t *node;
	struct queue *next;
} queue_t;

queue_t *create_queue(binary_tree_t *node);
void free_queue(queue_t *head);
void tree_enqueue(binary_tree_t *node, queue_t **tail, void (*func)(int));
void tree_dequeue(queue_t **head);

	/************BINARY TREE PROTOTYPE*****************/
	binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
	binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
	binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
	void binary_tree_delete(binary_tree_t *tree);
	int binary_tree_is_leaf(const binary_tree_t *node);
	int binary_tree_is_root(const binary_tree_t *node);
	void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
	void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
	void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
	size_t binary_tree_height(const binary_tree_t *tree);
	size_t binary_tree_depth(const binary_tree_t *tree);
	size_t binary_tree_size(const binary_tree_t *tree);
	size_t binary_tree_leaves(const binary_tree_t *tree);
	size_t binary_tree_nodes(const binary_tree_t *tree);
  binary_tree_t *binary_tree_uncle(binary_tree_t *node);
  binary_tree_t *binary_tree_sibling(binary_tree_t *node);
  int binary_tree_is_perfect(const binary_tree_t *tree);
  int binary_tree_is_full(const binary_tree_t *tree);
  int binary_tree_balance(const binary_tree_t *tree);
	binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
			const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/*********BINARY TREE HELPER************/
size_t max(int a, int b);
size_t find_tree_height(const binary_tree_t *tree);
int is_complete(const binary_tree_t *root, int index, int node_count);
int node_count(const binary_tree_t *node);

#endif /*_BINARY_TREES_H_*/
