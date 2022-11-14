#include <bits/stdc++.h>
using namespace std;

void print(int* p){
    cout << *p << endl;
}

void increamentPointers(int* p){
    p = p + 1; 
}

void increament(int* p){
    (*p)++;
}

int main(){
  int i = 10;
  int *p = &i;
  print(p);

  cout << p << endl;
  increamentPointers(p);
  cout << p << endl;

  cout<< *p << endl;
  increament(p);
  cout<< *p << endl;
}