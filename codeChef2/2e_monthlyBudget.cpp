#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(30*y <= x){
            cout<< "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
        
    }
	return 0;
}
