#include <bits/stdc++.h>
using namespace std;
#include "operatorOverloading.cpp"

int main(){
    fraction f1(10, 2);
    fraction f2(15, 4);

    fraction f3 = f1.add(f2);
    fraction f4 = f1 + f2;

    f1.print();
    f2.print();
    f3.print();
    f4.print();

    fraction f5 = f1*f2;
    f5.print();
    
    if(f1 == f2){
        cout << "Equal" << endl;
    }
    else{
        cout << "Not equal" << endl;
    }
}