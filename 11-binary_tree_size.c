#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
    int left, right, size;

    if (tree == NULL)
       return (0);
    
    size = 0;
    left = binary_tree_size(tree->left);
    right = binary_tree_size(tree->right);
    
    size = 1 + left + right;
    return (size);
}