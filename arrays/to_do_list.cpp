#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int  input[50];
        for(int i =0; i < n; i++){
            cin >> input[i];
        }
        int count = 0;
        for(int  i = 0; i <n; i++){
            if( input[i]  >= 1000){
                count++;
            }
        }
        cout << count << endl;
    }
}