#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x >= 1 && x <= 4){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	return 0;
}