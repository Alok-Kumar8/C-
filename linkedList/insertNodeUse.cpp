#include <bits/stdc++.h>
using namespace std;
#include "insertNode.cpp"


node *takeInput(){
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while(data != -1){
        node *newNode = new node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

node* insertNode(node *head, int i, int data){
    node *newNode = new node(data);
    int count = 0;
    node *temp = head;
    if(i==0){
        newNode->next = head;
        head = newNode;
        return head;
    }
    while(head != NULL && count < i - 1){
        temp = temp->next;
        count++;
    }
    if(temp != NULL){
    node *a = temp->next;
    temp->next = newNode;
    newNode = a;
   }
   return head;
}

int main(){
    node *head = takeInput();
    print(head);

    int i, data;
    cin >> i >> data;
    head = insertNode(head, i, data);
    print(head);
}
