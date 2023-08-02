/*
    Code of Pre-order Traversal of Binary Tree
    
    By 
    Ajay Varshney
    2000290120016
    CS 6A

*/

#include <iostream>
#include <vector>
#include <queue>

using std::cout;
using std::endl;
using std::vector;
using std::queue;

#include "binary_tree.cpp"

void preorder(BTNode *root) {
    if(!root) return;

    cout << root->val << endl;
    preorder(root->left);
    preorder(root->right);
}

int main() {
    vector<int> a = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    cout << "Array 'a' : ";
    for(int i : a) cout << i << " ";
    cout << endl << endl;

    BinaryTree bin(a);

    cout << "Inorder Traversal of 'a' :" << endl;
    preorder(bin.getRoot());

    return 0;
}