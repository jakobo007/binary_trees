#include "binary_trees.h"

/**
 * check_level - Helper function to check if all leaves are at the same level
 * @node: Pointer to the current node
 * @depth: Current depth of the node
 * @height: Height of the tree
 *
 * Return: 1 if the subtree is perfect, 0 otherwise
 */
int check_level(const binary_tree_t *node, size_t depth, size_t height)
{
if (node == NULL)
{
 return 1;
 }
if (node->left == NULL && node->right == NULL)
{
return (depth == height);
}
if (node->left != NULL && node->right != NULL)
{
return check_level(node->left, depth + 1, height) &&
check_level(node->right, depth + 1, height);
}
return 0;
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node to check
 * Return: 0 if tree is null
*/

int binary_tree_is_perfect(const binary_tree_t *tree){
/**
 * A perfect binary tree is a tree in which all 
 * All internal nodes have exactly two children
 * All leaves are at the same level
*/
size_t height = binary_tree_height(tree) - 1;
if (tree == NULL)
return (0);
return binary_tree_is_full(tree) && check_level(tree, 0, height);
}