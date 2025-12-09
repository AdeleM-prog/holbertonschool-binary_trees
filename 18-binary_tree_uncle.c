#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the node uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *uncle;
binary_tree_t *granny;
if (node == NULL)
return (NULL);
if (node->parent == NULL)
return (NULL);
if (node->parent->parent == NULL)
return (NULL);

granny = node->parent->parent;

if (granny->right != NULL && node->parent == granny->left)
{
uncle = granny->right;
return (uncle);
}

if (granny->left != NULL && node->parent == granny->right)
{
uncle = granny->left;
return (uncle);
}

return (NULL);
}
