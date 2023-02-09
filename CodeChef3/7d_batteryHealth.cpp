#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x >= 80){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	return 0;
}
