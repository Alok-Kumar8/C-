#include <bits/stdc++.h>
using namespace std;
#include "studentClass.cpp"

int main(){
    // Object creation statically
    Student s1;
    Student s2;
    Student s3, s4;

    // assigning value
    s1.name = "Alok";
    s1.age = 23;

    s2.name = "pooja";
    s2.age = 20;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.getRollNumber() << endl;

    //function calling 
    s1.display();
    s2.display();

    //Object creation Dynamically
    Student *s5 = new Student;
    Student *s6 = new Student;

    //assigning value
    (*s5).name = "Rahul";
    (*s5).age = 26;

    //Similarily
    s6->name = "Rohit";
    s6->age = 21;

    cout << (*s5).name << endl;
    cout<< s6->name << endl;

    // function calling
    (*s5).display();
    s6->display();

}
