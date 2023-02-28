#include <bits/stdc++.h>
using namespace std;
#include "copyConstructorclass.cpp"

int main(){
    char name[] = "abcd";
    student s1(20, name);
    s1.display();

    student s2(s1);

    s2.name[0] = 'x';
    s1.display();
    s2.display();
}
