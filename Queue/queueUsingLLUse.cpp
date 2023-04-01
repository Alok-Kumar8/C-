#include <bits/stdc++.h>
using namespace std;
#include "queueUsingLL.cpp"

int main(){
    queueLL<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);

    cout << q.front() << endl;
    cout << q.getSize() << endl;

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    cout << q.getSize() << endl;
    cout << q.front() << endl;

}
