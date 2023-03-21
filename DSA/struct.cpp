#include <bits/stdc++.h>
using namespace std;

struct{
    string model;
    int year;
} myStructure;

int main(){
    myStructure.model = "BMW";
    myStructure.year = 1990;
    cout << myStructure.model << endl;
    cout << myStructure.year << endl;
}