#include <bits/stdc++.h>
#include "binaryTreeNode.h"
using namespace std;

binaryTreeNode<int>* takeInput(){
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    if(rootData == -1){
        return NULL;
    }

    binaryTreeNode<int>* root = new binaryTreeNode<int>(rootData);
    binaryTreeNode<int>* leftNode = takeInput();
    binaryTreeNode<int>* rightNode = takeInput();
    root->left = leftNode;
    root->right = rightNode;
    return root;
}
void print(binaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    cout << root->data << ":";
    if(root->left != NULL){
        cout << "L" << root->left->data << " ";
    }

    if(root->right != NULL){
        cout << "R" << root->right->data ;
    }
    cout << endl;
    print(root->left);
    print(root->right);
}

binaryTreeNode<int>* btn(binaryTreeNode<int>* root, int target){
    if(root == NULL){
        return NULL;
    }

    if(root->data == target){
        return root;
    }
    else if(root->data < target){
        binaryTreeNode<int>* leftROOt = btn(root->left, target);
        return leftROOt;
    }else if(root->data > target){
        binaryTreeNode<int>* rightRoot = btn(root->right, target);
        return rightRoot;
    }

}

void range(binaryTreeNode<int>* root, int k1, int k2){
    if(root == NULL){
        return;
    }

    if(root->data >= k1 && root->data <= k2){
        cout << root->data << endl;
    }
    else if(root->data < k1){
        range(root->left, k1, k2);
    }
    else if(root->data > k1){
        range(root->right, k1, k2);
    }
}

int main(){
    // binaryTreeNode<int>* root = new binaryTreeNode<int>(1);
    // binaryTreeNode<int>* node1 = new binaryTreeNode<int>(2);
    // binaryTreeNode<int>* node2 = new binaryTreeNode<int>(3);
    // root->left  = node1;
    // root->right = node2;
    binaryTreeNode<int>* root = takeInput();
    print(root);
}