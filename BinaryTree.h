//
// Created by ubantu on 2021/8/1.
// 二叉树
//

#ifndef INC_2021_08_01_BINARYTREE_H
#define INC_2021_08_01_BINARYTREE_H

#include <stdlib.h>

typedef struct Node {
    int element;
    struct Node *left;
    struct Node *right;
} TreeNode;

TreeNode *createTree(void) {
    TreeNode *newNode;
    newNode = malloc(sizeof(TreeNode));
    newNode->element = 0;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int checkElement(TreeNode *node, TreeNode *newNode) {
    if (!node) {
        node = newNode;
        return 1;
    }
    if (!node->left) {
        node->left = newNode;
        return 1;
    }
    if (!node->right) {
        node->right = newNode;
        return 1;
    }
    return 0;
}

void insert(TreeNode *node, int element) {
    TreeNode *newNode = createTree();
    TreeNode *tmpNode = node;
    TreeNode *beforeNode = NULL;

    newNode->element = element;
    while (1) {
        beforeNode = tmpNode;
        tmpNode = tmpNode->left;
        if (!tmpNode) {
            beforeNode->left = newNode;
            return;
        }
        if (!beforeNode->right) {
            beforeNode->right = newNode;
            return;
        }
        if (checkElement(tmpNode, newNode)) return;
        else if (checkElement(beforeNode->right, newNode)) return;
    }
}

void showTree(TreeNode *root) {
    TreeNode *tmpNode = root;
    if (!tmpNode) return;
    printf("%d", root->element);
    showTree(tmpNode->left);
    showTree(tmpNode->right);
}

#endif //INC_2021_08_01_BINARYTREE_H
