#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    int smallOutput = factorial(n - 1);
    return n * smallOutput;
}



int main(){
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
}