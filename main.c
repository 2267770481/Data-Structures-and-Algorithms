#include <stdio.h>
#include <stdlib.h>
#include "ChainTable.h"
#include "BinaryTree.h"
#include "Sort.h"

int main() {
//    printf("链表打印...\n");
//    ChainNode head;
//    // head = createNode();
//    initPool();
//    head = getNode();
//    push(head, 1);
//    push(head, 2);
//    push(head, 3);
//    push(head, 4);
//    push(head, 5);
//    push(head, 6);
//    printf("pool length: %d\n", NODE_POOL.length);
//    delete(head, 2);
//    printf("pool length: %d\n", NODE_POOL.length);
//    showChain(head);
//    printf("\n------------------\n");
//
//    printf("二叉树打印...\n");
//    TreeNode* root;
//    root = createTree();
//    insert(root, 1);
//    insert(root, 2);
//    insert(root, 3);
//    insert(root, 4);
//    insert(root, 5);
//    showTree(root);
//    printf("\n------------------\n");
    char s[] = {34, 8, 64, 51, 32, 21};
    int i=0;
    // InsertionSort(s, strlen(s));
    ShellSort(s, strlen(s));
    for (i = 0; i < strlen(s); i++)
        printf("%d,", s[i]);
    return 0;
}
