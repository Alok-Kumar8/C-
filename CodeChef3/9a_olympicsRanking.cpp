#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;
        if(x+y+z > a+b+c){
            cout << 1 << endl;
        }
        else if(x+y+z == a+b+c){
            if(x > a){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
        else{
            cout << 2 << endl;
        }
    }
	return 0;
}
