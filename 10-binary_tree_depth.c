#include "binary _tree.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: depth of the depth, 0 if tree == NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t i = 0;
if (tree == NULL)
return (0);
while (tree->parent != NULL)
{
tree = tree->parent;
i++;
}
return (i);
}
