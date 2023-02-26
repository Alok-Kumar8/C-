#include <bits/stdc++.h>
using namespace std;
#include "class2.cpp"

int main(){
    Student s1(10, 101);
    cout << "s1 : ";
    s1.display();

    Student s2(s1);
    cout << "s2 : ";
    s2.display();

    Student *s3 = new Student(100, 10001);
    cout << "s3 : ";
    (*s3).display();

    Student *s4 = new Student(*s3);
    cout << "s4 : ";
    (*s4).display();

    Student *s5 = new Student(s1);
    cout << "s5 : ";
    s5->display();
}