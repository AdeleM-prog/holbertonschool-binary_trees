#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/* =============================================================================
 * STRUCTURES DE DONNÉES
 * =============================================================================
 */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

/* Typedefs pour différents types d’arbres */
typedef struct binary_tree_s binary_tree_t; /* Arbre binaire simple */
typedef struct binary_tree_s bst_t;         /* Binary Search Tree */
typedef struct binary_tree_s avl_t;         /* AVL Tree */
typedef struct binary_tree_s heap_t;        /* Max Binary Heap */

/* =============================================================================
 * FONCTIONS DE BASE
 * =============================================================================
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);

/* =============================================================================
 * PARCOURS D’ARBRE
 * =============================================================================
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* =============================================================================
 * MESURE D’ARBRE
 * =============================================================================
 */
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);

/* =============================================================================
 * VÉRIFICATIONS
 * =============================================================================
 */
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);

/* =============================================================================
 * RELATIONS ENTRE NŒUDS
 * =============================================================================
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* =============================================================================
 * AFFICHAGE
 * =============================================================================
 * Fonction fournie pour visualiser l’arbre (pas à inclure dans le repo)
 */
void binary_tree_print(const binary_tree_t *tree);

#endif