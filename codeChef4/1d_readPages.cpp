#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        if(x*y >= n){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	// your code goes here
	return 0;
}
