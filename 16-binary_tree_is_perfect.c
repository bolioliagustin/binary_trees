#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to check
 * Return: height of the tree
 */
int binary_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_height(tree->left);
	right_height = binary_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, height;

	if (tree == NULL)
		return (0);
	left_height = binary_height(tree->left);
	right_height = binary_height(tree->right);
	height = left_height + right_height;
	if (height == 0)
		return (1);
	if (height == 1)
		return (0);
	if (height == 2)
	{
		if (left_height == 1 && right_height == 1)
			return (1);
		else
			return (0);
	}
	if (height == 3)
	{
		if (left_height == 1 && right_height == 2)
			return (1);
		else
			return (0);
	}
	if (height == 4)
	{
		if (left_height == 2 && right_height == 2)
			return (1);
		else
			return (0);
	}
	return (0);
}
