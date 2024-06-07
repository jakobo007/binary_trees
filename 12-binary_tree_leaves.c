#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in binary tree
 * @tree: pointer to the root node of the tree to count
 * Return: 0 if tree in NULL
 * A NULL pointer is not a leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t right_leaves, left_leaves, total;
if (tree == NULL)
{
return (0);
}
/**
 * A leaf node is a node that does't have any children
 * Total number of leaves is the sum of leaves in the leaf subtree
 * leaves in the right subtree
 * Plus 1 for the current leaf node
*/
right_leaves = binary_tree_leaves(tree->right);
left_leaves = binary_tree_leaves(tree->left);
total = right_leaves + left_leaves + 1;
return (total);
}
