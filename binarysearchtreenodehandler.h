#ifndef BINARYSEARCHTREENODEHANDLER_H
#define BINARYSEARCHTREENODEHANDLER_H

#include "binarysearchtreenode.h"


class BinarySearchTreeNodeHandler
{
    BinarySearchTreeNode *root;
public:
    BinarySearchTreeNodeHandler(BinarySearchTreeNode *root);
    BinarySearchTreeNode *getRoot() const;
    void setRoot(BinarySearchTreeNode *newRoot);
    void add(BinarySearchTreeNode *el);
    BinarySearchTreeNode* getNext() const;
};

#endif // BINARYSEARCHTREENODEHANDLER_H
