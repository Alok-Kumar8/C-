#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        
        if(x < y && x < z){
            cout << "Alice" << endl;
        }
        else if(y < x && y < z){
            cout << "Bob" << endl;
        }
        else{
            cout << "Charlie" << endl;
        }
    }
	return 0;
}
