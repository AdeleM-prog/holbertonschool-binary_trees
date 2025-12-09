#include "binary_trees.h"

/**
 * depth_leftmost - returns depth of leftmost leaf
 * @tree: pointer to root
 * Return: depth
 */
int depth_leftmost(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect_recursive - recursive helper to check perfect tree
 * @tree: pointer to current node
 * @depth: expected depth of all leaves
 * @level: current level
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (1);

    /* Leaf node */
	if (!tree->left && !tree->right)
		return (depth == level + 1);

    /* Must have 2 children */
	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: pointer to root
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (!tree)
		return (0);

	d = depth_leftmost(tree);

	return (is_perfect_recursive(tree, d, 0));
}
