#include <bits/stdc++.h>
using namespace std;
#include "template.cpp"

int main(){
   Pair<int> p1;
   p1.setX(100);
   p1.setY(200);

   cout << p1.getX() << " " << p1.getY() << endl;

   Pair<double> p2;
   p2.setX(100.45);
   cout << p2.getX() << endl;

   Pair<char> p3;
   p3.setX('z');
   cout << p3.getX() << endl;



}