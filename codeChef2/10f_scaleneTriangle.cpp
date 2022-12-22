#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(c < (a + b) && a!=b && b!=c && c!=a){
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
	return 0;
}
