/*
 * Created by Sotirios-Efstathios Maneas on 2017-01-02.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tree.h"

/**
 *  A helper function that allocates a new tree node.
 *
 *  @param value The entry's value. It represents either an attribute or a filename.
 *  @return A pointer to the newly allocated node.
 *  (for now it returns NULL, so the compiler does not complain)
 */
struct TreeNode *allocate_node(const char *value)
{

	struct TreeNode *newNode = malloc(sizeOf(struct TreeNode));

	strcpy(newNode->value, value);

	newNode->child = NULL;
	newNode->sibling = NULL;

	return newNode;
}

/**
 *  Insert a new image to a tree
 *
 *  @param tree A pointer to the root of the tree.
 *  @param values An array, whose first three members are the attribute values for 
 *                the image and the last one is the filename
 */
void tree_insert(struct TreeNode *root, char **values)
{

	if (root->child == NULL)
	{
		root->child = allocate_node(values[0])
	}
	else
	{
	}
}

void create_node(struct TreeNode *root, char **values, int level)
{
	if (level < 5)
	{
		{
			if (root->child == NULL)
			{
				root->child = allocate_node(values[0]);
			}
			else if (strcmp(root->value, values[0]) == 0)
			{
				create_node(root, values, level++);
			}
		}
	}
}

/**
 *  Searches a tree to print all files with matching attribute values.
 *
 *  @param tree A pointer to the root of the tree.
 *  @param values An array of attribute values
 */
void tree_search(const struct TreeNode *root, char **values)
{
}

/**
 *  Prints a complete tree to the standard output.
 *
 *  @param tree A pointer to the root of the tree.
 */
void tree_print(const struct TreeNode *tree)
{
}

void printDatabase(struct TreeNode *tree, char **values, int level, int onlyOnce)
{
	if (level == 5)
	{
		values[3] = tree->value;

		for (int i = 0; i < 4; i++)
		{
			printf("%s", values[i]);
		}

		printf("\n");
	}
	else
	{
		values[level - 2] = tree->value;

		printDatabase(tree->child, values, level++, 1);
	}

	if (onlyOnce == 1)
	{
	}
}