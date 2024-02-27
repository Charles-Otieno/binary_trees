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
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    if (left_height != right_height)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left && tree->right)
        return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

    return (0);
}
