#include "binary_tree.h"
/**
 * binary_tree_leaves - function that counts the leaves
 * @tree: pointer to the root node of the tree to count
 * Return: 0 if tree is NULL, else nb of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t total_lvs;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
else
{
total_lvs = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
return (total_lvs);
}
}
