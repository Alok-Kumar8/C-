#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;
    cout<< i<< endl;
    cout<< p << endl;
    cout<< *p << endl;

    i++;
     cout<< i<< endl;      // i and p have the same the same address so any changes made in one will also reflect in the other. 
    cout << *p << endl;

}