#include "binary_tree.h"
/**
 * binary_tree_height - measures de height of a tree - Entry point
 * @tree: pointer to root
 * Return: height, or 0 if NULL
 */
static size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h, right_h;
if (tree == NULL)
return (0);
left_h = binary_tree_height(tree->left);
right_h = binary_tree_height(tree->right);
if (left_h > right_h)
return (left_h);
if (left_h < right_h)
return (right_h);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to root
 * Return: 0 if tree is NULL, int if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_h, right_h;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left == NULL || tree->right == NULL)
return (0);

left_h = binary_tree_height(tree->left);
right_h = binary_tree_height(tree->right);
if (left_h == right_h)
return (1);
if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
return (1);
}
