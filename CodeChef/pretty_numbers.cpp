#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, r;
    cin >> l >> r ;
    int ans;
    int count = 0;
    for(int i = l; i <= r; i++){
        ans = i % 10;
        if((ans == 2) || (ans == 3) || (ans == 9)){
            count++;
        }
    }
    cout << count << endl;
}