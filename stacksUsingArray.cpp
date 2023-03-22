#include <bits/stdc++.h>

class stacks{
    int *data;
    int nextIndex;
    int capacity;

    public:

    stacks(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex==0;
    }

    void push(int element){
        if(nextIndex==capacity){
            cout << "Stack is full" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int pop(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};