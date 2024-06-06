#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with atleast 1 child in a binary tree
 * @tree: is a pointer to the root node of tree to count
 * Return: 0 if tree is null
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left_node, right_nodes;
if (tree == NULL)
return (0);
/**
 * 
*/
if (tree->left != NULL || tree->right != NULL)
{
left_node = binary_tree_nodes(tree->left);
right_nodes = binary_tree_nodes(tree->right);
return left_node + right_nodes + 1;
}
return (0);
}
