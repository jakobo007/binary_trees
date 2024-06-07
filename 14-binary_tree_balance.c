#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the node to measure
 * Return: 0 if tree is null
*/
int binary_tree_balance(const binary_tree_t *tree)
{
/**
 * balance factor is the difference btwn the height of the 
 * left and right subtrees
 * BalanceFactor(N) = height(leftSubtree) - height(rightsubtree)
*/
int left_height, right_height;
if (tree == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}
