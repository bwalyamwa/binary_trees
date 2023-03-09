#include "binary_trees.h"

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL tree.
 * @tree: node that point to the tree to check.
 * Return: 1 if tree is AVL, 0 if not.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (bal_avl(tree, INT_MIN, INT_MAX));
}
