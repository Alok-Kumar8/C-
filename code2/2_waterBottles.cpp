#include <iostream>
using namespace std;

int main() {{
        int n, x, k;
        cin >> n >> x >> k;
        int rem = k / x;
        if(rem > n){
            cout << n << endl;
        }
        else{
            cout << rem << endl;
        }
    }
	return 0;
}