#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node to find sibling
 * If node or parent is null return NULL
 * if node has no sibling return NULL
 * Return: NULL or pointer to sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
{
return (node->parent->right);
}
else if (node->parent->right == node)
{
return (node->parent->left);
}
return (NULL);
}
