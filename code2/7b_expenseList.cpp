#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int p = x - n;
        int ans = pow(2, p);
        cout << ans<< endl;
    }
	return 0;
}