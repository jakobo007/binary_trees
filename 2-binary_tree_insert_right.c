#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - func to insert as righgt_child of another node
 * @parent: pointer to node to insert
 * @value: Value to insert in the new node
 * Return: pointer to new node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){
if (parent == NULL)
return (NULL);
binary_tree_t *new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);
if (parent->right != NULL)
{
parent->right->parent = new_node;
new_node->right = parent->right;
}
parent->right = new_node;
return (new_node);
}