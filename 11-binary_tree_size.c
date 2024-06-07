#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: pointer to root nodr to measure
 * Return: 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_size, right_size, total;
if (tree == NULL)
{
return (0);
}
/* the total size of the tree is the sum of the left subtree's size the size of the right subtree's size Plus 1 for the current node */
left_size = binary_tree_size(tree->left);
right_size = binary_tree_size(tree->right);
total = left_size + right_size + 1;
return (total);
}
