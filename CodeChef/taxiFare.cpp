#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x < y){
            cout << "Take taxi X" << endl;
        }
        else if(x > y){
            cout << "Take taxi Y" << endl;
        }
        else{
            cout << "Any taxi" << endl;
        }
    }
}