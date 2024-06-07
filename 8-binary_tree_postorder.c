#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse a tree using postorder
 * @tree: tree to traverse
 * @func: a pointer to a func to call for each node
 * The value in the node must be passed as a parameter in func
 * Return: Nothing if tree or func is NULL
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
