#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 on success, 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (tree->left && tree->right)
		return (left && right);

	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of a binary tree, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftsize = 0, rightsize = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		leftsize = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rightsize = binary_tree_height(tree->right) + 1;
	return (leftsize - rightsize);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	else if (tree->left || tree->right)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left >= right)
			return (left + 1);
		return (right + 1);
	}
	else
		return (0);
}
