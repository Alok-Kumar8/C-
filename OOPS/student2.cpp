#include <bits/stdc++.h>
using namespace std;
#include "class2.cpp"

int main(){
    Student s1(101);
    cout << "Address of s1 is : " << &s1 << endl; 
    s1.display();

    Student s2(1001, 23);
    s2.display();

}
