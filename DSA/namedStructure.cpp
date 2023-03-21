#include <bits/stdc++.h>
using namespace std;

struct car {
    string model;
    int year;
};

int main(){
    car myCar1;
    myCar1.model = "Ford";
    myCar1.year = 1995;

    car myCar2;
    myCar2.model = "BMW";
    myCar2.year = 1990;

    cout << myCar2.model <<" " << myCar2.year << endl;
    cout << myCar1.model << " " << myCar1.year << endl;
}