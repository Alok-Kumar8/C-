#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        if(m < n + k){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
        }
    }
	// your code goes here
	return 0;
}