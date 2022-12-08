#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m, k, x;
        cin >> n >> m >> k >> x;
        int totalDays = (k - 1)*n + (m + n);
        x = x % totalDays;
        if(x > (k - 1)*n || x == 0){
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
	return 0;
}
