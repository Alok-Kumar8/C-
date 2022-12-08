#include <bits/stdc++.h>
using namespace std;

int a;                         // global variable, can be accessed by all the function------ should be avoided

void g(){
    a++;
    cout << a << endl;
}

void f(){
    a++;
    cout << a << endl;
    g();
}

int main(){
    a = 10;
    cout << a << endl;
    f();
}