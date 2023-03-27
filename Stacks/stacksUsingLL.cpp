#include <bits/stdc++.h>
using namespace std;
class node{
    public:

    int data;
    node* next;

    node(int n){
        this->data = n;
        next = NULL;
    }
};

class stacks{
    node* head;
    int size;
    public:
    stacks(){
        head = NULL;
        size = 0;
    }

    int getSize(){
        return size;
    }

    void push(int data){
        node* newNode = new node(data);
        if(!newNode){
            cout << "stacks OverFlow" << endl;
            exit(1);
        }
        newNode->next = head;
        head = newNode;
        size++;
    }

    bool isEmpty(){
        return head == NULL;
    }

    int top(){
        if(!isEmpty()){
            return head->data;
        }
        else{
            exit(1);
        }
    }

    void pop(){
        node* temp;
        if(head==NULL){
            cout << "stack UnderFlow" << endl;
            exit(1);
        }
        else{
            temp = head;
            head = head->next;
            delete temp;
            size--;
        }
    }

    void display(){
        node* temp;
        if(head==NULL){
            cout << "stacksUnderFLow" << endl;
            exit(1);
        }
        else{
            temp = head;
            while(temp!=NULL){
                cout << temp->data;
                temp = temp->next;
                cout << " -> ";
            }
        }
    }
};

int main(){
    stacks s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    s1.display();

    cout << "\n" << s1.getSize() << endl;

    cout << "\nTop element is : " << s1.top() << endl;

    s1.pop();
    s1.pop();

    cout << s1.getSize() << endl;

    s1.display();

    cout << "\nTop element is : " << s1.top() << endl;

}