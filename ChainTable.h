//
// Created by ubantu on 2021/8/1.
// 链表 (用节点池获取节点)
//

#ifndef INC_2021_08_01_CHAINTABLE_H
#define INC_2021_08_01_CHAINTABLE_H

#include<stdlib.h>

#define POOL_LENGTH 10

typedef struct node *ChainNode;
struct node {
    int element;
    int length;
    struct node *next;
};

struct nodePool {
    int length;
    ChainNode pool[POOL_LENGTH];
};

struct nodePool NODE_POOL;

ChainNode createNode() {
    ChainNode newNode;
    newNode = malloc(sizeof(ChainNode));
    newNode->element = 0;
    newNode->length = 0;
    newNode->next = NULL;
    return newNode;
}

void initPool() {
    ChainNode tmpNode = malloc(sizeof(ChainNode) * POOL_LENGTH);
    for (int i = 0; i < POOL_LENGTH; i++)
        NODE_POOL.pool[i] = tmpNode+(i* sizeof(ChainNode));
    NODE_POOL.length = POOL_LENGTH - 1;
}

ChainNode getNode() {
    ChainNode tmpNode = NULL;
    if (NODE_POOL.length < 0) initPool();
    tmpNode = NODE_POOL.pool[NODE_POOL.length];
    NODE_POOL.length--;
    return tmpNode;
}

void receiveNode(ChainNode node) {
    if (NODE_POOL.length < POOL_LENGTH - 1) {
        NODE_POOL.pool[++NODE_POOL.length] = node;
    }
}

void push(ChainNode head, int element) {
    ChainNode tmpNode = head;
    // ChainNode newNode = createNode();
    ChainNode newNode = getNode();
    newNode->element = element;

    while (tmpNode->next) tmpNode = tmpNode->next;
    tmpNode->next = newNode;
    newNode->length = ++head->length;
}

void delete(ChainNode head, int deep) {
    ChainNode tmpNode = head;
    ChainNode beforeNode = NULL;
    if (deep < 1) return;
    for (int i = 0; i < deep; i++) {
        beforeNode = tmpNode;
        tmpNode = tmpNode->next;
    }
    receiveNode(tmpNode);
    tmpNode = tmpNode->next;
    beforeNode->next = tmpNode;
    while (tmpNode) {
        tmpNode->length--;
        tmpNode = tmpNode->next;
    }
    head->length--;

}

int showChain(ChainNode head) {
    ChainNode tmpNode = head;
    do {
        tmpNode = tmpNode->next;
        printf("deep: %d, value: %d\n", tmpNode->length, tmpNode->element);
    } while (tmpNode->next);
    return 0;
}


#endif //INC_2021_08_01_CHAINTABLE_H
