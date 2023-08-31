#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using pre-order traversal.
 * @tree: A pointer to root node of tree to traverse.
 * @func: A pointer pointing  a function to call for each node.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
