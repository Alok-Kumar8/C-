#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(i==0 || i==n-1){
            cout << 1;
        }
        else{
            cout << 0;
        }
        cout << endl;
    }
}