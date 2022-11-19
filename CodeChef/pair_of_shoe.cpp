#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(m >= n){
            cout << n << endl;
        }
        else if(n > m){
       int ans = n - m;
       cout << ans + n << endl;
        }
    }
	// your code goes here
	return 0;
}
