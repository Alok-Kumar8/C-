#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, a;
        cin >> x >> y >> a;
        if(a >= x && a < y){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	// your code goes here
	return 0;
}