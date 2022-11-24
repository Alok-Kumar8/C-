#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string l = s.substr(0 , n/2);
    string r = s.substr(n/2, n);
        if(l.compare(r) == 0){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    
}