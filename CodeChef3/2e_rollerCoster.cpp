#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, h;
        cin >> x >> h;
        if(x >= h){
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
	return 0;
}
