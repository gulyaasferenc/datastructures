#ifndef BINARYSEARCHTREENODE_H
#define BINARYSEARCHTREENODE_H

class BinarySearchTreeNode
{
    int key;
    int value;
    BinarySearchTreeNode *right;
    BinarySearchTreeNode *left;
    BinarySearchTreeNode *parent;
public:
    BinarySearchTreeNode(int value);
    int getValue() const;
    void setValue(int newValue);
    BinarySearchTreeNode *getRight() const;
    void setRight(BinarySearchTreeNode *newRight);
    BinarySearchTreeNode *getLeft() const;
    void setLeft(BinarySearchTreeNode *newLeft);
    BinarySearchTreeNode *getParent() const;
    void setParent(BinarySearchTreeNode *newParent);
};

#endif // BINARYSEARCHTREENODE_H
