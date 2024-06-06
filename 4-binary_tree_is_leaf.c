#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function to check if node is a leaf
 * @node: pointer to the node to check
 * Return: 1 or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node){
if (node == NULL)
return (0);
/**
 * A node is a leaf if both their pointers are null
*/
if (node->left == NULL && node->right == NULL)
{
    return (1);
}
return (0);
}
