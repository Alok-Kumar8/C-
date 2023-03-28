#include <bits/stdc++.h>
using namespace std;
#include "tripletTemplate.cpp"

int main(){
    Pair<Pair<int, int>, int> p1;
    p1.setY(100);
    Pair<int, int> p2;
    p2.setX(200);
    p2.setY(300);
    p1.setX(p2);

    cout << p1.getX().getX() << " " << p1.getX().getY() << endl;
    cout << p1.getY() << endl;
    cout << p2.getX() << " " << p2.getY() << endl;
}