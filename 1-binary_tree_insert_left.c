#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to insert a node as a left-child of another node
 * @parent: Pointer to the node node to insert in
 * @value: value to store in the new node
 * Return: Pointer to the created node or NUll
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
if (parent == NULL)
return (NULL);
binary_tree_t *new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);
if (parent->left != NULL)
{
parent->left->parent = new_node;
new_node->left = parent->left;
}
parent->left = new_node;
return (new_node);
}
