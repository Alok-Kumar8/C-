#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cout<< &i << endl;
    int * p = &i;
    cout<< p<< endl;
    float f = 21.45;
    float * pf = &f;
    double d = 1234.45547;
    double* pd = &d;
    cout<< pf << endl;
    cout<< pd << endl;
}
