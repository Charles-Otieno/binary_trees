#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* Base case: If the tree is empty, it is full */
    if (tree == NULL)
        return (1);

    /* If the node has no children, it is full */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* If the node has exactly two children, continue checking recursively */
    if (tree->left && tree->right)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    /* If the node has only one child, the tree is not full */
    return (0);
}
