#include <bits/stdc++.h>
using namespace std;
#include "reverseLL.cpp"

node* reverseLL(node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    node *smallAns = reverseLL(head->next);
    node *temp = smallAns;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = head;
    head->next = NULL;
    return smallAns;
}

node* takeInput(){
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
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    node *head = takeInput();
    head = reverseLL(head);
    print(head);
}



