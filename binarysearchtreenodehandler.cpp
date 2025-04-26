#include "binarysearchtreenodehandler.h"

BinarySearchTreeNode *BinarySearchTreeNodeHandler::getRoot() const
{
    return root;
}

void BinarySearchTreeNodeHandler::setRoot(BinarySearchTreeNode *newRoot)
{
    root = newRoot;
}

void BinarySearchTreeNodeHandler::add(BinarySearchTreeNode *el)
{
    BinarySearchTreeNode* candidate = this->getRoot();

    bool found = false;
    while (found == false) {
        if (candidate->getValue() >= el->getValue()) {
            if (candidate->getLeft() == nullptr) {
                candidate->setLeft(el);
                found = true;
            } else {
                candidate = candidate->getLeft();
            }

        } else {
            if (candidate->getRight() == nullptr) {
                candidate->setRight(el);
                found = true;
            } else {
                candidate = candidate->getRight();
            }
        }

        el->setParent(candidate);
    }
}

BinarySearchTreeNodeHandler::BinarySearchTreeNodeHandler(BinarySearchTreeNode *root): root(root) {}
