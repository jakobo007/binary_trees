#include "binary_trees.h"
/**
 * binary_tree_height - function to measure height of a binary tree
 * @tree: pointer to the tree node to measure
 * Return: 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree){
if (tree == NULL)
return (0);
size_t left_height, right_height, max_height;
max_height = 0;
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
max_height = (left_height > right_height ? left_height : right_height) + 1;
return (max_height);
}
