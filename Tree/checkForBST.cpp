#include <bits/stdc++.h>
#include "binaryTreeNode.h"
using namespace std;

class isBstReturn{
    public:
    int minimum;
    int maximum;
    bool isBst;
};

isBstReturn isBst2(binaryTreeNode<int>* root){
    if(root == NULL){
        isBstReturn output;
        output.isBst = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }

    isBstReturn leftOutput = isBst2(root->left);
    isBstReturn rightOutput = isBst2(root->right);
    int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
    int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));
    bool isBSTFinal = (root->data > leftOutput.maximum) && (root->data <= rightOutput.minimum) && leftOutput.isBst && rightOutput.isBst;
    isBstReturn output;
    output.minimum = minimum;
    output.maximum = maximum;
    output.isBst = isBSTFinal;
    return output;
}

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

int minimum(binaryTreeNode<int>* root){
    if(root == NULL){
        return INT_MIN;
    }
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}

int maximum(binaryTreeNode<int>* root){
    if(root == NULL){
        return INT_MIN;
    }

    return max(root->data, max(maximum(root->left), maximum(root->right)));
}


bool checkBST(binaryTreeNode<int>* root){
    if(root == NULL){
        return true;
    }
    

    int leftMax = minimum(root->left);
    int rightMin = maximum(root->right);
    bool output = (root->data > leftMax) && (root->data <= rightMin) && (checkBST(root->left)) && (checkBST(root->right));
    return output;
}

int main(){
    // binaryTreeNode<int>* root = new binaryTreeNode<int>(1);
    // binaryTreeNode<int>* node1 = new binaryTreeNode<int>(2);
    // binaryTreeNode<int>* node2 = new binaryTreeNode<int>(3);
    // root->left  = node1;
    // root->right = node2;
    binaryTreeNode<int>* root = takeInput();
    print(root);
    cout << checkBST(root) << endl;
    delete root;
}