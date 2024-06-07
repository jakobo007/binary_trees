#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the node to check
 * Return: 0 if tree is null
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
/**
 * A full binary tree is a tree where each node except
 * the leaves has two children
*/
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left != NULL && tree->right != NULL)
{
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
return (0);
}
