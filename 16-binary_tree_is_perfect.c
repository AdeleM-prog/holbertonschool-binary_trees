#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);


	if (!tree->left && !tree->right)
		return (1);


	if (!tree->left || !tree->right)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);


	return (left_h == right_h &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
