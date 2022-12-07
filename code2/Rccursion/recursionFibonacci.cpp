#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int smallNumber1 = fibonacci(n - 1);
    int smallNumber2 = fibonacci(n - 2);
    return smallNumber1 + smallNumber2;
}

int main(){
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans << endl;
}