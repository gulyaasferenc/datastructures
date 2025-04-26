#include "binarysearchtreenode.h"
#include "binarysearchtreenodehandler.h"

#include <iostream>

using namespace std;

int main()
{
    BinarySearchTreeNode *root = new BinarySearchTreeNode(20);
    BinarySearchTreeNodeHandler handler(root);

    handler.add(new BinarySearchTreeNode(11));
    handler.add(new BinarySearchTreeNode(30));

    cout << "root: " << root->getValue() << "; root left: " << root->getLeft()->getValue() << "; root right: " << root->getRight()->getValue() << endl;

    return 0;
}
