#include <bits/stdc++.h>
using namespace std;
#include "reverseLL.cpp"

node* reverseLL_2(node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node *smallAns = reverseLL_2(head->next);
    node *tail = head->next;
    tail->next = head;
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
    node *output = reverseLL_2(head);
    print(output);
}