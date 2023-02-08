#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int a = 3*x;
        int b = 2*y;
        if(a < b){
            cout << a << endl;
        }
        else{
            cout << b << endl;
        }
    }
	return 0;
}
