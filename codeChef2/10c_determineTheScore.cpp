#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;
        int m = x / 10;
        cout << m*n << endl;
    }
	return 0;
}