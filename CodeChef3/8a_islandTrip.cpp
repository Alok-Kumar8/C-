#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, a, b, d;
        cin >> x >> y >> a >> b >> d;
        int food = x/a;
        int water = y/b;
        if(food < d || water < d){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
        }
    }
	return 0;
}
