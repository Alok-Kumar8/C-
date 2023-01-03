#include <iostream>
using namespace std;

int main() {int t;
cin >> t;
while(t--){
    int x, m, d;
    cin >> x >> m >> d;
    int cwt = x*m;
    int mlt = x+d;
    if(cwt <= mlt){
        cout << cwt << endl;
    }
    else {
        cout << mlt << endl;
    }
}
	return 0;
}
