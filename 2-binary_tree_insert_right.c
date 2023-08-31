#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 * @parent: Pointer pointing to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	parent->right = newNode;
	return (newNode);
}
