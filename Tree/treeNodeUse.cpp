#include <bits/stdc++.h>
#include "treeNode.h"
#include <queue>
using namespace std;

treeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Enter rootData" << endl;
    cin >> rootData;
    treeNode<int>* root = new treeNode<int>(rootData);

    queue<treeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        treeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter the number of children of" << front->data << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++){
            int childData;
            cout << "Enter" << i << "th child of" << front->data<< endl;
            cin >> numChild;
            treeNode<int>* child = new treeNode<int>(numChild);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

int numNodes(treeNode<int>* root){
    if(root == NULL){
        return;
    }
    int ans = 1;
    for(int i = 0; i < root->children.size(); i++){
       ans += numNodes(root->children[i]);
    }
    return ans;
}

int treeHeight(treeNode<int>* root){
    int ans = 0;
    for(int i = 0; i < root->children.size(); i++){
        ans += treeHeight(root->children[i]);
    }
}

void printNodesAtLevelK(treeNode<int>* root, int k){
    if(root = NULL){
        cout << "Tree is Empty" << endl;
        return;
    }
    if(k == 0){
        cout << root->data << endl;
    }

    for(int i = 0; i < root->children.size(); i++){
        printNodesAtLevelK(root->children[i], k - 1);
    }
}

treeNode<int>* takeInput(){
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    treeNode<int> *root = new treeNode<int>(rootData);

    int n;
    cout << "Enter the number if children of" << rootData << endl;
    cin >> n;
    for(int i = 0; i < n;i++){
        treeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(treeNode<int>* root){
if(root == NULL){
    return;                   // edgeCase not a base case
}

    cout << root->data << ":" ;
    for(int i = 0; i<root->children.size(); i++)
{
    cout << root->children[i]->data << ",";
}
cout << endl;
    for(int i = 0; i < root->children.size() ; i++){
        printTree(root->children[i]);
    }
}

int main(){
    // treeNode<int> *root = new treeNode<int>(1);
    // treeNode<int> *node1 = new treeNode<int>(2);
    // treeNode<int> *node2 = new treeNode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // treeNode<int>* root = takeInput();
    treeNode<int>* root = takeInputLevelWise();
    printTree(root);
    cout << numNodes(root) << endl;
    int k;
    cout << "Enter the level to be printed : " << endl;
    cin >> k;
    printNodesAtLevelK(root, k);
    delete root;
}