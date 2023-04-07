#include <bits/stdc++.h>
#include "treeTraversal.h"
using namespace std;

treeTraversal<int>* buildTree(int in[], int pre[], int inStrt, int inEnd){
    int preIndex = 0;
    if(inStrt > inEnd){
        return NULL;
    }
    treeTraversal<int>* root = new treeTraversal<int>(pre[preIndex++]);
    // if(inStrt == inEnd){
    //     return root;
    // }
     int i;
    for(i = inStrt ; i <= inEnd ; i++){
        if(in[i] == root->data){
            break;
        }
    }
    // = search(in, inStrt, inEnd, root->data);
    root->left = buildTree(in, pre, inStrt, i - 1);
    root->right = buildTree(in, pre, i + 1, inEnd);
    return root;
}

// int search(int arr[], int inStrt, int inEnd, int value){
   
// }

void printTree(treeTraversal<int>* root){
    if(root == NULL){
        return;
    }
    printTree(root->left);
    cout << root->data << " " ;
    printTree(root->right);
}

int main(){
    int preOrder[] = {3, 9, 20, 15, 7};
    int inOrder[] = {9, 3, 15, 20, 7};
    int length = sizeof(inOrder)/sizeof(inOrder[0]);
    treeTraversal<int>* root = buildTree(inOrder, preOrder, 0, length - 1);
    cout << "Print inOrder traversal :" << endl;
    printTree(root);

}