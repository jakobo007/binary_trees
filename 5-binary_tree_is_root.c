#include "binary_trees.h"
/**
 * binary_tree_is_root - checks is node is root
 * @node: pointer to the node to check
 * Return: 1 if root or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
/**
 * A node is a root if it's parent pointer is null
*/
if (node->parent == NULL)
{
return (1);
}
return (0);
}
