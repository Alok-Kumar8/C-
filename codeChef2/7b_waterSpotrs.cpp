#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, a, b, c;
        cin >> x >> y >> a >> b >> c;
        int rem = x - y;
        if(rem >= a +  b + c){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	return 0;
}
