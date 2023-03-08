#include <bits/stdc++.h>
using namespace std;
#include "takeInput.cpp"

node *takeInput(){
    int data;
    cin >> data;
    node *head = NULL;
    while(data != -1){
        node *newNode = new node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            node *temp = head;
            while(temp->next != NULL){
                temp = temp -> next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp->data;
        temp = temp->next;
    }
}

int main(){
    node *head = takeInput();
    print(head);
}
