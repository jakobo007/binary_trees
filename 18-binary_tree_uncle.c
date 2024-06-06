#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of node
 * @node: pointer to node to find the uncle
 * Return: pointer to uncle node
 * Return: NULL if node is NULL
 * Return: NULL if node has no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node){
if (node == NULL || node->parent == NULL)
return (NULL);
return binary_tree_sibling(node->parent);
}
