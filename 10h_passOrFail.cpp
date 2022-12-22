#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x, p;
        cin >> n >> x >> p;
        int tm = 3*n;
        int cm = 3*x;
        int nm = -1*(n - x);
        if(cm + nm >= p){
            cout << "pass" << endl;
        }
        else {
            cout << "fail" << endl;
        }
    }
	return 0;
}
