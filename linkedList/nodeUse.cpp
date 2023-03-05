#include <bits/stdc++.h>
using namespace std;
#include "node.cpp"

 void print(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main(){
    node n1(10);
    node *head = &n1;

    node n2(20);
    node n3(30);
    node n4(40);
    node n5(50);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

   

print(head);


}