#include "binarysearchtreenode.h"

BinarySearchTreeNode::BinarySearchTreeNode(int val): value(val), right(nullptr), left(nullptr)
{
}

int BinarySearchTreeNode::getValue() const
{
    return value;
}

void BinarySearchTreeNode::setValue(int newValue)
{
    value = newValue;
}

BinarySearchTreeNode *BinarySearchTreeNode::getRight() const
{
    return right;
}

void BinarySearchTreeNode::setRight(BinarySearchTreeNode *newRight)
{
    right = newRight;
}

BinarySearchTreeNode *BinarySearchTreeNode::getLeft() const
{
    return left;
}

void BinarySearchTreeNode::setLeft(BinarySearchTreeNode *newLeft)
{
    left = newLeft;
}

BinarySearchTreeNode *BinarySearchTreeNode::getParent() const
{
    return parent;
}

void BinarySearchTreeNode::setParent(BinarySearchTreeNode *newParent)
{
    parent = newParent;
}
