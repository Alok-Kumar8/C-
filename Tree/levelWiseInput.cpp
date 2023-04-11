#include <bits/stdc++.h>
#include <queue>
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
    queue<binaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        binaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "enter left child data of " << front->data << endl;
        int leftChild;
        cin >> leftChild;
        if(leftChild != -1){
            binaryTreeNode<int>* lChild = new binaryTreeNode<int>(leftChild);
            front->left = lChild;
            pendingNodes.push(lChild);
        }

        cout << "Enter right child data of" << front->data << endl;
        int rightChild;
        cin >> rightChild;
        if(rightChild != -1){
            binaryTreeNode<int>* rChild = new binaryTreeNode<int>(rightChild);
            front->right = rChild;
            pendingNodes.push(rChild);
        }
    }
    return root;
}

int numNodes(binaryTreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    return 1+ numNodes(root->left) + numNodes(root->right);
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






int main(){
    // binaryTreeNode<int>* root = new binaryTreeNode<int>(1);
    // binaryTreeNode<int>* node1 = new binaryTreeNode<int>(2);
    // binaryTreeNode<int>* node2 = new binaryTreeNode<int>(3);
    // root->left  = node1;
    // root->right = node2;
    binaryTreeNode<int>* root = takeInput();
    print(root);
    cout << numNodes(root) << endl;
}