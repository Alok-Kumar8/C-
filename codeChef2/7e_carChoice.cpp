#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if(x*b > y*a){
            cout << -1 << endl;
        }
        else if(x*b == y*a){
            cout << 0 << endl;
        }
        else if(x*b < y*a){
            cout << 1 << endl;
        }
    }
	return 0;
}
