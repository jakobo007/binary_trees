#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function to create a new node
 * @parent: Pointer to parent node of new node
 * @value: value to put inside the node
 * Return: A pointer to the new node or NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return NULL;
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
}
