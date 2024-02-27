#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    /* Base case: if tree is NULL, return 0 */
    if (tree == NULL)
        return (0);

    /* Calculate height of left and right subtrees */
    size_t l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    size_t r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    /* Return maximum of left and right subtree heights */
    return ((l > r) ? l : r);
}
