#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        int diff = abs(x-y);
        int quo = diff/k;
        int rem = diff%k;
        if(diff==0){
            cout << 0 << endl;
        }
        else if(diff < k){
            cout << 1 << endl;
        }
        else if(rem==0){
            cout << quo << endl;
        }
        else if(rem > 0){
            cout << quo + 1 << endl;
        }
       
    }
	// your code goes here
	return 0;
}
