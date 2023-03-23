#include <bits/stdc++.h>
using namespace std;
#include "stacksNoSizeLimit.cpp"

int main (){
    stacks s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);
    s1.push(80);
    s1.push(90);
    s1.push(100);
    s1.push(110);
    s1.push(120);

    cout << s1.top() << endl;

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;

    cout << s1.size() << endl;

    cout << s1.isEmpty() << endl;
}