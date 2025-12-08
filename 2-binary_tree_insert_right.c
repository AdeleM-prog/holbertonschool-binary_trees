#include "binary_tree.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;
binary_tree_t *old;
if (parent == NULL)
return (NULL);
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);
new->parent = parent;
new->left = NULL;
new->right = NULL;
if (parent->right == NULL)
parent->right = new;
else
{
old = parent->right;
new->right = old;
old->parent = new;
parent->right = new;
}
return (new);
}
