#include "binarysearchtreenode.h"
#include "binarysearchtreenodehandler.h"

#include <iostream>

using namespace std;

void binarySearchTreeTest() {
    BinarySearchTreeNode *root = new BinarySearchTreeNode(20);
    BinarySearchTreeNodeHandler handler(root);

    handler.add(new BinarySearchTreeNode(11));
    handler.add(new BinarySearchTreeNode(30));

    BinarySearchTreeNode *numberFour = new BinarySearchTreeNode(21);

    handler.add(numberFour);

    cout << "root: "
         << root->getValue()
         << "; root left: "
         << root->getLeft()->getValue()
         << "; root right: "
         << root->getRight()->getValue()
         << "; should be there: "
         << root->getRight()->getLeft()->getValue()
         << endl;
}

int main()
{
    binarySearchTreeTest();

    return 0;
}
