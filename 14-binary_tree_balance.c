#include "binary_tree.h"
/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: pointer to the root
 * Return: 0 if tree NULL, else balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_h = 0, right_h = 0;
if (tree == NULL)
return (0);
if ((tree->left) != NULL)
left_h = 1 + binary_tree_height(tree->left);
if (tree->right)
right_h = 1 + binary_tree_height(tree->right);
return (left_h - right_h);
}
