#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sub1 = abs(a - c);
        int sub2 = abs(b - d);
        if(sub1 > sub2){
            cout << sub1 << endl;
        }
        else{
            cout << sub2 << endl;
        }
    }
	return 0;
}
