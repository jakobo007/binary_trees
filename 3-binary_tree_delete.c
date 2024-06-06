#include "binary_trees.h"
/**
 * binary_tree_delete - function to delete a tree
 * @tree: Tree to delete
 * Return: Nothing if tree is null
*/
void binary_tree_delete(binary_tree_t *tree){
if (tree == NULL)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
