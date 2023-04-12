#include <bits/stdc++.h>
#include "treeTraversal.h"
using namespace std;

treeTraversal<int>* buildTree(int in[], int pre[], int inS, int inE, int preS, int preE){
    int rootData = pre[preS];
    if(inS > inE){
        return NULL;
    }
    treeTraversal<int>* root = new treeTraversal<int>(rootData);
    if(inS == inE){
        return root;
    }
    int i;
    for(i = inS ; i <= inE ; i++){
        if(in[i] == root->data){
            break;
        }
    }

    int lInS = inS;
    int lInE = i - 1;
    int lPreS = preS + 1;
    int lPreE = lInE - lInS + lPreS;
    int rInS = i + 1;
    int rInE = inE;
    int rPreS = lPreE + 1;
    int rPreE = preE;

    
    root->left = buildTree(in, pre, lInS, lInE, lPreS, lPreE);
    root->right = buildTree(in, pre, rInS, rInE, rPreS, rPreE);
    return root;
}

treeTraversal<int>* tree(int in[], int pre[], int length){
    return buildTree(in, pre, 0, length - 1, 0, length - 1);
}

void print(treeTraversal<int>* root){
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

void printTree(treeTraversal<int>* root){
    if(root == NULL){
        return;
    }
    printTree(root->left);
    cout << root->data << " " ;
    printTree(root->right);
}

int height(treeTraversal<int>* root){
    if(root == NULL){
        return 0;
    }
    return 1 + height(root->left) + height(root->right);
}

pair<int, int> heightDiameter(treeTraversal<int>* root){
    if(root == NULL){
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }

    pair<int, int> leftAns = heightDiameter(root->left);
    pair<int, int> rightAns = heightDiameter(root->right);
    
    int lh = leftAns.first;
    int ld = leftAns.second;
    int rh = rightAns.first;
    int rd = rightAns.second;

    int height = 1 + max(lh, rh);
    int diameter = max(lh + rh, max(ld, rd));
    pair<int, int> p;
    p.first = height;
    p.second = diameter;
    return p;

}

int main(){
    int preOrder[] = {3, 9, 20, 15, 7};
    int inOrder[] = {9, 3, 15, 20, 7};
    int length = sizeof(inOrder)/sizeof(inOrder[0]);
    treeTraversal<int>* root = tree(inOrder, preOrder, length);
    cout << "Print inOrder traversal :" << endl;
    printTree(root);
    cout << endl;
    print(root);

    cout << "Tree height is: " << height(root) << endl;

}