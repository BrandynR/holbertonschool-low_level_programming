#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first == second)
		return (NULL);
	if (second->parent == first)
		return (second->parent);
	if (first->parent == second)
		return (first->parent);
	if (first->parent == second->parent)
		return (first->parent);

	binary_trees_ancestor(first->parent, second->parent);

	return (NULL);
}
