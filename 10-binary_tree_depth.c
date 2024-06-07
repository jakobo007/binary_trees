#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the depth of a tree
 * @tree: pointer to the node to measure
 * Return: 0 if tree is null
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree == NULL)
{
return (0);
}
/**
 * The function traverses up the tree by following the parent pointers until it reaches the root node (where parent is NULL). It increments the depth variable in each step.
*/
while (tree->parent != NULL)
{
depth++;
tree = tree->parent;
}
return (depth);
}
