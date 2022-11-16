#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* p = new int[n];
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    sort(p, p+n);
    for(int i = 0;i <n; i++){
        cout << p[i] <<" ";
    }
    cout << endl;
}

